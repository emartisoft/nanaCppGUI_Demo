#include "NanaProjectApp.h"

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, char*, int nShowCmd)
{
	MainForm mainForm;
	mainForm.icon(paint::image("app.ico"));
	mainForm.show();
	exec();
}
