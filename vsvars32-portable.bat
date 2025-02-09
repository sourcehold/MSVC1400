@SET VSINSTALLDIR=%~dp0
@SET VCINSTALLDIR=%~dp0\VC
@SET FrameworkDir=C:\WINDOWS\Microsoft.NET\Framework
@SET FrameworkVersion=v2.0.50727
@SET FrameworkSDKDir=%~dp0\SDK\v2.0
@if "%VSINSTALLDIR%"=="" goto error_no_VSINSTALLDIR
@if "%VCINSTALLDIR%"=="" goto error_no_VCINSTALLDIR

@echo Setting environment for using Microsoft Visual Studio 2005 x86 tools.

@rem
@rem Root of Visual Studio IDE installed files.
@rem
@set DevEnvDir=%~dp0\Common7\IDE

@set PATH=%~dp0\Common7\IDE;%~dp0\VC\BIN;%~dp0\Common7\Tools;%~dp0\Common7\Tools\bin;%~dp0\VC\PlatformSDK\bin;%~dp0\SDK\v2.0\bin;C:\WINDOWS\Microsoft.NET\Framework\v2.0.50727;%~dp0\VC\VCPackages;%PATH%
@set INCLUDE=%~dp0\VC\ATLMFC\INCLUDE;%~dp0\VC\INCLUDE;%~dp0\VC\PlatformSDK\include;%~dp0\SDK\v2.0\include;%INCLUDE%
@set LIB=%~dp0\VC\ATLMFC\LIB;%~dp0\VC\LIB;%~dp0\VC\PlatformSDK\lib;%~dp0\SDK\v2.0\lib;%LIB%
@set LIBPATH=C:\WINDOWS\Microsoft.NET\Framework\v2.0.50727;%~dp0\VC\ATLMFC\LIB

@goto end

:error_no_VSINSTALLDIR
@echo ERROR: VSINSTALLDIR variable is not set. 
@goto end

:error_no_VCINSTALLDIR
@echo ERROR: VCINSTALLDIR variable is not set. 
@goto end

:end
