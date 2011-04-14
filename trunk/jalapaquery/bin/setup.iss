#define MyAppName "JalapaQuery"
#define MyAppVersion "0.1"
#define MyAppPublisher "JalapaQuery.org"
#define MyAppURL "http://code.google.com/p/jalapaquery/"
#define MyAppExeName "JalapaQuery.exe"

[Setup]
AppId={{4F2FC751-AAE7-45A9-BE7B-43758C03D16F}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
AllowNoIcons=yes
LicenseFile=COPYING
OutputDir=out
OutputBaseFilename=jalapaquery-{#MyAppVersion}
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "brazilianportuguese"; MessagesFile: "compiler:Languages\BrazilianPortuguese.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}";
Name: "quicklaunchicon"; Description: "{cm:CreateQuickLaunchIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked; OnlyBelowVersion: 0,6.1

[Files]
Source: "JalapaQuery.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "libgcc_s_dw2-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "mingwm10.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "QtCore4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "QtGui4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "plugins\*"; DestDir: "{app}\plugins"; Excludes: "*.a";Flags: ignoreversion recursesubdirs createallsubdirs
Source: "resources\*"; DestDir: "{app}\resources"; Flags: ignoreversion recursesubdirs createallsubdirs

[Icons]
Name: "{group}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: quicklaunchicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, "&", "&&")}}"; Flags: nowait postinstall skipifsilent

