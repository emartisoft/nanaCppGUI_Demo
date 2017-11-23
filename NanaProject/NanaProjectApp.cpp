#include "NanaProjectApp.h"

using namespace std;

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, char*, int nShowCmd)
{
	MainForm mainForm;
	
	// If you wanna use "app.ico" named icon file in the same folder
	//mainForm.icon(paint::image("app.ico"));
	// or your project exe name (this project's exe name is 'NanaProject.exe')
	//mainForm.icon(paint::image("NanaProject.exe"));
	
	// Thanks to Error Flynn from Nana C++ Library Forum
	wstring app_path(4096, '\0');
	app_path.resize(GetModuleFileNameW(0, &app_path.front(), (DWORD)app_path.size()));
	mainForm.icon(paint::image(app_path));
	// End of thanks :)
	
	mainForm.show();
	exec();
}
