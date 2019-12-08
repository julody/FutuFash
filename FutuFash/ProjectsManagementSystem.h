#pragma once
#include "Common.h"
#include "MainMenu.h"

class User;
class Project;
class MainMenu;

class ProjectsManagementSystem
{
private:
	void handleDataLoading(std::map<int, User*> *users, std::map<int, Project*> *projects);
	void handleMainMenu(std::map<int, User*> *users, std::map<int, Project*> *projects);
public:
	ProjectsManagementSystem();
};

