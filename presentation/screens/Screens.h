
#include "cliet_screens/client_screens.h"
#include "admin_screens/admin_screens.h"

struct Screens
{
private:
	ClietScreens* clientScreens;
	AdminScreens* adminScreens;
public:
	void Login()
	{
		string user, password;
		long long value;
		bool isClient;
		cout << "¬ибер≥ть тип обл≥кового запису: " << endl;
		cout << "1 -  л≥Їнт" << endl;
		cout << "0 - јдм≥н" << endl;
		cout << "¬вед≥ть: ";
		cin >> value;
		isClient = (bool)value;
		cin.ignore();
		cout << "¬вед≥ть ≥м'€ користувача: ";
		getline(cin, user);
		cout << "¬вед≥ть ≥м'€ пароль: ";
		getline(cin, password);
		if (isClient)
		{
			clientScreens = new ClietScreens();
			clientScreens->Menu();
		}
		else
		{
			adminScreens = new AdminScreens();
			adminScreens->Menu();
		}
	}
};
