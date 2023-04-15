#pragma once

#include <vector>
#include <string>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>
#include "Mesh.h"
#include "Texture.h"

class Model
{
public:
	Model();
	void LoadModel(const std::string& fileName);
	void RenderModel();
	void ClearModel();
	~Model();
private:
	void LoadMode(aiNode* node, aiScene* scence);
	void LoadMesh(aiMesh* mesh, aiScene* scence);
	void LoadMaterials(aiScene *scene);

	std::vector<Mesh*> meshList;
	std::vector<Texture*> textureList;
	std::vector<unsigned int> meshToText;
};

