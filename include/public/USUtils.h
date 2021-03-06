// @@@LICENSE
//
//      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// LICENSE@@@

#ifndef UTILS_H
#define UTILS_H

#include <sstream>
#include <iostream>
#include <stdio.h>
#include <regex.h>
#include <glib.h>
#include <time.h>
#include <stdlib.h>

namespace USUtils {


char* readFile(const char* filePath);
bool doesExistOnFilesystem(const char * pathAndFile);
gboolean compare_regex (const gchar * regex,const gchar * string);
int getUniqueId();
bool getServiceDomainPart(const std::string& url, std::string& domainPart);
void initRandomGenerator();
int fileCopy(const char * srcFileAndPath,const char * dstFileAndPath);
}
#endif
