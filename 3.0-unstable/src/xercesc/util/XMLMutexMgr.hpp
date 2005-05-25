/*
 * Copyright 1999-2000,2004 The Apache Software Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id: MacAbstractFile.hpp 176026 2004-09-08 13:57:07Z peiyongz $
 */

#ifndef XMLMUTEXMGL_HPP
#define XMLMUTEXMGL_HPP

#include <xercesc/util/XMemory.hpp>

XERCES_CPP_NAMESPACE_BEGIN

typedef void* XMLMutexHandle;

//	Abstract class for mutex implementation.
//  This is be used to allow multiple mutex handling implementations.
class XMLMutexMgr : public XMemory
{
    public:
        XMLMutexMgr() {}
        virtual ~XMLMutexMgr() {}

		// Mutex operations
		virtual XMLMutexHandle	create(MemoryManager* const manager) = 0;
		virtual void			destroy(XMLMutexHandle mtx, MemoryManager* const manager) = 0;
		virtual void			lock(XMLMutexHandle mtx) = 0;
		virtual void			unlock(XMLMutexHandle mtx) = 0;
};

XERCES_CPP_NAMESPACE_END


#endif
