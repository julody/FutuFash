#pragma once
#include "Common.h"
#include "Menu.h"
#include "Entities.h"
#include "ParticipantsMenu.h"

class Menu;
class Project;
class User;
class Designer;

class ProjectsMenu :
	public Menu
{
private:
	std::map<int, Project*> *projects;
	std::map <int, User*> *users;

public:
	ProjectsMenu(std::map<int, User*> *users, std::map<int, Project*> *projects);
	void printMenu();
	void handleAdding();
	void printAllProjects();
	void handleSearch();
	void addNew(Project* newProject);
	Designer* getNewDesigner();
	void handleProfile(std::vector<Project*> data);
	int getNumToShow();
	void printProfile(Project* project);
	void handleChanging(Project* project);
	void handleParticipantsMenu(Project* project, std::map<int, User*> *user);
	void handleDeleting(Project* project);

	~ProjectsMenu();
};

