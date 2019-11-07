#pragma once

#include "Vector4D.h"
#include "Matrix4D.h"

#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

class MeshResource {
private:
	unsigned int VBO;
	unsigned int VAO;
	unsigned int EBO;

	float verticies[9 * 24]; // vector of vertecies that are displayed
	float Originalverticies[9 * 24]; // vector of vertecies used to return to original conditions
	unsigned int indices[3 * 12];
	float textureCourdinates[2*8];

public:
	MeshResource();
	~MeshResource();

	void generateSquare();
	void generateCube();

	void bindBuffer2D();
	void bindBuffer3D();
	void draw();

	void reset();

	void translate(Vector4D translation);

	void rotate(Matrix4D rotation);

	bool outOfBounds();

	bool loadObject(const char* OBJPath);
};

inline MeshResource::MeshResource() {
	glGenBuffers(1, &VBO);
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &EBO);

	float temp[21] =
	{
		-0.5f,	-0.5f,	-1,			// pos 0
		0,		0,		0,		1,	// color 0
		0,		0.5f,	-1,			// pos 1
		0,		0,		0,		1,	// color 1
		0.5f,	-0.5f,	-1,			// pos 2
		0,		0,		0,		1	// color 2
	};

	for (int i = 0; i < 21; i++) {
		verticies[i] = temp[i];
	}

	indices[0] = 0;
	indices[1] = 1;
	indices[2] = 2;
}

inline MeshResource::~MeshResource() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_ARRAY_BUFFER | GL_ELEMENT_ARRAY_BUFFER);
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);
}

inline void MeshResource::generateSquare() {
	float tempVert[36] =
	{
		-0.5f,	0.5f,	-1,			// pos 0 TL
		0,		1,		0,		1,	// color 0
		0,		1,					// Texture 0

		0.5f,	0.5f,	-1,			// pos 1 TR
		0,		0,		1,		1,	// color 1
		1,		1,					// Texture 1

		-0.5f,	-0.5f,	-1,			// pos 2 BL
		0,		0,		1,		1,	// color 2
		0,		0,					// Texture 2

		0.5f,	-0.5f,	-1,			// pos 3 BR
		0,		1,		0,		1,	// color 3
		1,		0					// Texture 3
	};

	for (int i = 0; i < 36; i++) {
		verticies[i] = tempVert[i];
		Originalverticies[i] = tempVert[i];
	}

	int tempInd[6] = { 0,3,2,0,3,1 };

	for (int i = 0; i < 6; i++) {
		indices[i] = tempInd[i];
	}
}

inline void MeshResource::generateCube() {
	const int size = 216;
	
	float tempVert[size] =
	{
		//Front Square
		-0.5f,	0.5f,	0.5f,			// pos 0 FTL
		1,		0,		0,		1,		// color 0
		0,		1,						// Texture 0

		0.5f,	0.5f,	0.5f,			// pos 1 FTR
		0,		1,		0,		1,		// color 1
		1,		1,						// Texture 1

		-0.5f,	-0.5f,	0.5f,			// pos 2 FBL
		0,		0,		1,		1,		// color 2
		0,		0,						// Texture 2

		0.5f,	-0.5f,	0.5f,			// pos 3 FBR
		1,		1,		0,		1,		// color 3
		1,		0,						// Texture 3

		//Back Square

		-0.5f,	0.5f,	-0.5f,			// pos 4 BTL
		1,		0,		1,		1,		// color 4
		1,		1,						// Texture 4

		0.5f,	0.5f,	-0.5f,			// pos 5 BTR
		0,		1,		1,		1,		// color 5
		0,		1,						// Texture 5

		-0.5f,	-0.5f,	-0.5f,			// pos 6 BBL
		1,		1,		1,		1,		// color 6
		1,		0,						// Texture 6

		0.5f,	-0.5f,	-0.5f,			// pos 7 BBR
		0,		0,		0,		1,		// color 7
		0,		0,						// Texture 7

		//Left Square

		-0.5f,	0.5f,	0.5f,			// pos 0 FTL
		1,		0,		0,		1,		// color 0
		1,		1,						// Texture 0

		-0.5f,	-0.5f,	0.5f,			// pos 2 FBL
		0,		0,		1,		1,		// color 2
		1,		0,						// Texture 2

		-0.5f,	0.5f,	-0.5f,			// pos 4 BTL
		1,		0,		1,		1,		// color 4
		0,		1,						// Texture 4

		-0.5f,	-0.5f,	-0.5f,			// pos 6 BBL
		1,		1,		1,		1,		// color 6
		0,		0,						// Texture 6

		//Right square

		0.5f,	0.5f,	0.5f,			// pos 1 FTR
		0,		1,		0,		1,		// color 1
		0,		1,						// Texture 1

		0.5f,	-0.5f,	0.5f,			// pos 3 FBR
		1,		1,		0,		1,		// color 3
		0,		0,						// Texture 3

		0.5f,	0.5f,	-0.5f,			// pos 5 BTR
		0,		1,		1,		1,		// color 5
		1,		1,						// Texture 5

		0.5f,	-0.5f,	-0.5f,			// pos 7 BBR
		0,		0,		0,		1,		// color 7
		1,		0,						// Texture 7

		//Top square

		-0.5f,	0.5f,	0.5f,			// pos 0 FTL
		1,		0,		0,		1,		// color 0
		0,		0,						// Texture 0

		0.5f,	0.5f,	0.5f,			// pos 1 FTR
		0,		1,		0,		1,		// color 1
		1,		0,						// Texture 1

		-0.5f,	0.5f,	-0.5f,			// pos 4 BTL
		1,		0,		1,		1,		// color 4
		0,		1,						// Texture 4

		0.5f,	0.5f,	-0.5f,			// pos 5 BTR
		0,		1,		1,		1,		// color 5
		1,		1,						// Texture 5

		//Bottom square

		-0.5f,	-0.5f,	0.5f,			// pos 2 FBL
		0,		0,		1,		1,		// color 2
		0,		1,						// Texture 2

		0.5f,	-0.5f,	0.5f,			// pos 3 FBR
		1,		1,		0,		1,		// color 3
		1,		1,						// Texture 3

		-0.5f,	-0.5f,	-0.5f,			// pos 6 BBL
		1,		1,		1,		1,		// color 6
		0,		0,						// Texture 6

		0.5f,	-0.5f,	-0.5f,			// pos 7 BBR
		0,		0,		0,		1,		// color 7
		1,		0						// Texture 7
	};

	for (int i = 0; i < size; i++) {
		verticies[i] = tempVert[i];
		Originalverticies[i] = tempVert[i];
	}

	int tempInd[36] = {	0,3,1,		//Front square
						0,3,2,
						4,7,5,		//Back square
						4,7,6,
						8,11,9,		//Left square
						8,11,10,
						12,15,13,	//Right square
						12,15,14,
						16,19,17,	//Top square
						16,19,18,
						20,23,21,	//Bottom square
						20,23,22

	};

	for (int i = 0; i < 36; i++) {
		indices[i] = tempInd[i];
	}
}

inline void MeshResource::bindBuffer2D() {
	glBindVertexArray(VAO);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(verticies), verticies, GL_DYNAMIC_DRAW); //change to dynamic or stream when moving object
	
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_DYNAMIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float32) * 9, NULL);
	glEnableVertexAttribArray(0);

	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(float32) * 9, (GLvoid*)(sizeof(float32) * 3));
	glEnableVertexAttribArray(1);

	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 9 * sizeof(float), (void*)(7 * sizeof(float)));
	glEnableVertexAttribArray(2);

	glBindBuffer(GL_ARRAY_BUFFER, 0);

	glBindVertexArray(0);

	//Texture Setup

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_MIRRORED_REPEAT);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
}

inline void MeshResource::bindBuffer3D() {

	glBindVertexArray(VAO);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(verticies), verticies, GL_DYNAMIC_DRAW); //change to dynamic or stream when moving object

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_DYNAMIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float32) * 9, NULL);
	glEnableVertexAttribArray(0);

	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, sizeof(float32) * 9, (GLvoid*)(sizeof(float32) * 3));
	glEnableVertexAttribArray(1);

	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 9 * sizeof(float), (void*)(7 * sizeof(float)));
	glEnableVertexAttribArray(2);

	glBindBuffer(GL_ARRAY_BUFFER, 0);

	glBindVertexArray(0);

	//Texture Setup

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_MIRRORED_REPEAT);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
}

inline void MeshResource::draw() {
	glBindVertexArray(VAO);

	glDrawElements(GL_TRIANGLES, sizeof(indices), GL_UNSIGNED_INT, 0);

	glBindVertexArray(0);
}

inline void MeshResource::reset() {
	for (int i = 0; i < 216; i++) {
		verticies[i] = Originalverticies[i];
	}
}

inline void MeshResource::translate(Vector4D translation) {
	for (int i = 0; i < 24; i++) {
		Vector4D tempTranslation(verticies[i * 9 + 0], verticies[i * 9 + 1], verticies[i * 9 + 2], 0);
		
		tempTranslation += translation;

		verticies[i * 9 + 0] = tempTranslation[0];
		verticies[i * 9 + 1] = tempTranslation[1];
		verticies[i * 9 + 2] = tempTranslation[2];
	}
}

inline void MeshResource::rotate(Matrix4D rotationMatrix) {

	float Cx, Cy, Cz;

	Cx = (verticies[0] + verticies[63]) / 2;
	Cy = (verticies[1] + verticies[64]) / 2;
	Cz = (verticies[2] + verticies[65]) / 2;

	//Rotate
	for (int i = 0; i < 24; i++) {
		Vector4D tempTranslation(verticies[i * 9 + 0], verticies[i * 9 + 1], verticies[i * 9 + 2], 0);

		tempTranslation[0] -= Cx;
		tempTranslation[1] -= Cy;
		tempTranslation[2] -= Cz;

		tempTranslation = rotationMatrix * tempTranslation;

		tempTranslation[0] += Cx;
		tempTranslation[1] += Cy;
		tempTranslation[2] += Cz;

		verticies[i * 9 + 0] = tempTranslation[0];
		verticies[i * 9 + 1] = tempTranslation[1];
		verticies[i * 9 + 2] = tempTranslation[2];
	}
}

inline bool MeshResource::outOfBounds() {
	float Cx, Cy;

	Cx = (verticies[0] + verticies[21]) / 2;
	Cy = (verticies[1] + verticies[22]) / 2;

	if (Cx > 1 || Cx < -1) {
		return true;
	}
	return false;
}

inline bool MeshResource::loadObject(const char* OBJPath) {
	std::vector<Vector4D> newVerticies;
	std::vector<Vector4D> newTextureCoordinates;
	std::vector<Vector4D> newFaces;
	std::vector<Vector4D> newNormal;

	FILE * file = fopen(OBJPath, "r");
	if(file == NULL){
		std::cout << "Error: Can't Open file";
		return false;
	}

	while(1){
		char lineHeader[128];
		//read the first word of the line
		int res = fscanf(file, "%s", lineHeader);
		if(res = EOF){ //EOF = End Of File
			break;
		}

		if(strcmp(lineHeader, "v") == 0){
			Vector4D vertex;
			fscanf(file, "%f %f %f\n", &vertex[0], &vertex[1], &vertex[2]);
			newVerticies.push_back(vertex);
		}
		else if(strcmp(lineHeader, "vt") == 0){
			Vector4D uv;
			fscanf(file, "%f %f\n", &uv[0], &uv[1]);
			newTextureCoordinates.push_back(uv);
		}
		else if(strcmp(lineHeader, "vn") == 0){
			Vector4D normal;
			fscanf(file, "%f %f %f\n", &normal[0], &normal[1], &normal[2]);
			newNormal.push_back(normal);
		}
		else if(strcmp(lineHeader, "f") == 0){
			Vector4D face1, face2, face3;
			int matches = fscanf(file, "%d/%d/%d %d/%d/%d %d/%d/%d\n", &face1[0], &face1[1], &face1[2], &face2[0], &face2[1], &face2[2], &face3[0], &face3[1], &face3[2]);
			if(matches != 9){
				std::cout << "Error: Format incompatible with reader";
				return false;
			}
			newFaces.push_back(face1);
			newFaces.push_back(face2);
			newFaces.push_back(face3);
		}
	}

	// add data to vertecies and indices
	for(int i = 0; i < newFaces.size(); i++){
		Vector4D face;
		face = newFaces[i];
		Vector4D vertex = newVerticies[face[0]-1];
		Vector4D texture = newTextureCoordinates[face[1]-1];
		verticies[i * 9 + 0] = vertex[0];
		verticies[i * 9 + 1] = vertex[1];
		verticies[i * 9 + 2] = vertex[2];
		verticies[i * 9 + 7] = texture[0];
		verticies[i * 9 + 8] = texture[1];
		indices[i] = face[0]-1;
	}
}