// First32.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"

BOOL CALLBACK DialogProc(
  HWND hwndDlg,  // handle to dialog box
  UINT uMsg,     // message
  WPARAM wParam, // first message parameter
  LPARAM lParam  // second message parameter
)
{

		switch(uMsg)
		{
		case WM_COMMAND:
			{
				switch(wParam){
				
					case IDCANCEL:
						EndDialog(hwndDlg,IDCANCEL);
						break;
					case IDOK:
						{
						
							int nLeft = GetDlgItemInt(hwndDlg,IDC_LIFT,NULL,true);
							int nRight = GetDlgItemInt(hwndDlg,IDC_RIGHT,NULL,true);
							SetDlgItemInt(hwndDlg,IDC_RESULT,nLeft+nRight,true);
						}
						break;
				}
			}
		
		}

	return FALSE;
}

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
 	
	//MessageBox(NULL,"the is my development first one softwere !","note",MB_OK);
	DialogBox(
	  hInstance,  // handle to application instance
	  (LPCTSTR)IDD_FIRSTDLG,   // identifies dialog box template
	  NULL,      // handle to owner window
	  DialogProc  // pointer to dialog box procedure
	);

	return 0;
}



