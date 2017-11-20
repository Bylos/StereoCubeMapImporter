// Some copyright should be here...
//#if WITH_EDITOR

#include "StereoCubeMapImporterCommands.h"
#include "StereoCubeMapImporterPrivatePCH.h"

#define LOCTEXT_NAMESPACE "FStereoCubeMapImporterModule"

void FStereoCubeMapImporterCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "StereoCubeMapImporter", "Execute StereoCubeMapImporter action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE

//#endif