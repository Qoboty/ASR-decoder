#ifndef __HUBO_TEXT_UTIL_H__
#define __HUBO_TEXT_UTIL_H__

#include <stdio.h>
#include <string>
#include <vector>

bool ConvertStringToInteger(const std::string &str, int *out);

void TrimString(std::string &str);

void CutLineToStr(std::string line,std::vector<std::string> &str);//, char ch = ' ');

#endif
