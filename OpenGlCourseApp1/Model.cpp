#include "Model.h"

Model::Model()
{
}

void Model::LoadModel(const std::string& fileName)
{
	Assimp::Importer importer;
	const aiScene* scene = importer.ReadFile(fileName, aiProcess_Triangulate | aiProcess_FlipUVs | aiProcess_GenSmoothNormals);
}

void Model::RenderModel()
{
}

void Model::ClearModel()
{
}

Model::~Model()
{
}

void Model::LoadMode(aiNode* node, aiScene* scence)
{
}

void Model::LoadMesh(aiMesh* mesh, aiScene* scence)
{
}

void Model::LoadMaterials(aiScene* scene)
{
}
