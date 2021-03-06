#pragma once
#include "Common.h"
#include "Menu.h"
#include "Entities.h"

class Menu;
class Project;
class User;
class Designer;
class Model;

enum UserMenuMode 
{
	GLOBAL_CHANGING,
	PROJECT_CHANGING
};

class UserMenu :
	public Menu
{
private:
	std::map<int, User*> *users;
	Project* projectToEdit;
	void printMenu();
	//switch
	void handleAdding();
	void printAllUsers();
	void handleSearch(UserMenuMode mode);
	//adding
	void addNew(Designer* designer = nullptr);
	void addNew(Model* model = nullptr);
	//profile
	void handleProfile(std::vector<User*> data, UserMenuMode mode);
	int getNumToShow(std::vector<User*> data);
	void printProfile(Designer* designer);
	void printProfile(Model* model);
	void handleGlobalChanging(Designer* designer);
	template <class X> void changeName(X* user);
	template <class X> void changeExperience(X* user);
	void changeVogue(Designer* designer);
	
	void handleGlobalChanging(Model* model);
	void changeHeight(Model* model);
	void changeWeight(Model* model);
	void changeHairColor(Model* model);
	void handleGlobalDeleting(User* user);
	void handleProjectAdding(Model* model);
	void handleProjectDeleting(Model* model);
public:
	UserMenu(std::map<int, User*> *users, UserMenuMode mode, Project* projectToEdit);
	~UserMenu();
};



