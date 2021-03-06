#pragma once
#include "Entity.h"
using namespace std;
class Project :
	public Entity

{
private:
	int id;
	string name;
	string date;
	string location;
	Designer* designer;
	map<Model*,int> models;
	enum ProjectStatus status;
	int mid;

public:
	Project();
	string getDate();
	string getLocation();
	Designer* getDesigner();
	map<Model*,int> getModels();
	enum ProjectStatus getStatus();

	void setDate(string date);
	void setLocation(string location);
	void addModel(Model* model, int mid);
	void removeModel(Model* model);
	void setStatus(enum ProjectStatus);

	~Project();


};

