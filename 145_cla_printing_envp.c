#include<stdio.h>
int main(int argc,char *argv[],char *envp[])
{
	int iCounter;
	
	printf("Printing Environment Setting:\n\n");
	
	for(iCounter=0; envp[iCounter] != NULL; iCounter++)
	printf("%s\n",envp[iCounter]);
	
	return 0;
}
/*
Printing Environment Setting:

ALLUSERSPROFILE=C:\ProgramData
APPDATA=C:\Users\SAI\AppData\Roaming
CommonProgramFiles=C:\Program Files\Common Files
CommonProgramFiles(x86)=C:\Program Files (x86)\Common Files
CommonProgramW6432=C:\Program Files\Common Files
COMPUTERNAME=DESKTOP-4B4SUHR
ComSpec=C:\Windows\system32\cmd.exe
DriverData=C:\Windows\System32\Drivers\DriverData
FPS_BROWSER_APP_PROFILE_STRING=Internet Explorer
FPS_BROWSER_USER_PROFILE_STRING=Default
HOMEDRIVE=C:
HOMEPATH=\Users\SAI
LOCALAPPDATA=C:\Users\SAI\AppData\Local
LOGONSERVER=\\DESKTOP-4B4SUHR
NUMBER_OF_PROCESSORS=4
OneDrive=C:\Users\SAI\OneDrive
OneDriveConsumer=C:\Users\SAI\OneDrive
OS=Windows_NT
Path=C:\Program Files (x86)\Dev-Cpp\MinGW64\bin;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files (x86)\Microsoft SQL Server\100\Tools\Binn\;C:\Program Files\Microsoft SQL Server\100\Tools\Binn\;C:\Program Files\Microsoft SQL Server\100\DTS\Binn\;C:\Users\SAI\AppData\Local\Microsoft\WindowsApps;C:\Users\SAI\AppData\Local\Programs\Microsoft VS Code\bin;C:\Users\SAI\AppData\Local\GitHubDesktop\bin
PATHEXT=.COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.MSC
PROCESSOR_ARCHITECTURE=AMD64
PROCESSOR_IDENTIFIER=Intel64 Family 6 Model 76 Stepping 4, GenuineIntel
PROCESSOR_LEVEL=6
PROCESSOR_REVISION=4c04
ProgramData=C:\ProgramData
ProgramFiles=C:\Program Files
ProgramFiles(x86)=C:\Program Files (x86)
ProgramW6432=C:\Program Files
PSModulePath=C:\Program Files\WindowsPowerShell\Modules;C:\Windows\system32\WindowsPowerShell\v1.0\Modules
PUBLIC=C:\Users\Public
SESSIONNAME=Console
SystemDrive=C:
SystemRoot=C:\Windows
TEMP=C:\Users\SAI\AppData\Local\Temp
TMP=C:\Users\SAI\AppData\Local\Temp
USERDOMAIN=DESKTOP-4B4SUHR
USERDOMAIN_ROAMINGPROFILE=DESKTOP-4B4SUHR
USERNAME=SAI
USERPROFILE=C:\Users\SAI
VS100COMNTOOLS=C:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\Tools\
windir=C:\Windows
*/
