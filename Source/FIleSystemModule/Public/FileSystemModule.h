#pragma once

#include "Modules/ModuleManager.h"

class FFileSystemModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};