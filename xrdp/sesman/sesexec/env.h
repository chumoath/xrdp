/**
 * xrdp: A Remote Desktop Protocol server.
 *
 * Copyright (C) Jay Sorg 2004-2013
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 *
 * @file env.h
 * @brief User environment handling code declarations
 * @author Jay Sorg
 *
 */

#ifndef ENV_H
#define ENV_H

#include "list.h"

/**
 *
 * @brief Creates vnc password file
 * @param filename VNC password file name
 * @param password The password to be encrypted
 * @return 0 on success, 1 on error
 *
 */
int
env_check_password_file(const char *filename, const char *password);

/**
 *
 * @brief Sets user environment ($PATH, $HOME, $UID, and others)
 * @param uid user ID
 * @param passwd_file VNC password file
 * @param display The session display
 * @return 0 on success, g_getuser_info() error codes on error
 *
 */
int
env_set_user(int uid, char **passwd_file, int display,
             const struct list *env_names, const struct list *env_values);

#endif
