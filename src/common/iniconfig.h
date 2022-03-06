#ifndef _SHBK_COMMON_INICONFIG_H_
#define _SHBK_COMMON_INICONFIG_H_

#include <string>
#include "configdef.h"

class Iniconfig{
public:
	Iniconfig();
	~Iniconfig();
	bool loadfile(const std::string& path);
	const st_env_config& getconfig();
	
private:
	st_env_config _config;
	bool _isloaded;
};




#endif