/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef ASSET_MGT_UTIL_H
#define ASSET_MGT_UTIL_H

#include <Common/Base/hkBase.h>
#include <Common/Serialize/Util/hkStructureLayout.h>

// This class helps with asset management for our demos
class hkAssetManagementUtil
{
	public:
			/// Fill in the string e with the appropriate name identifier stuff
		static const char* HK_CALL getFileEnding(hkStringBuf& e, hkStructureLayout::LayoutRules rules);

			/// This class takes a general filename and converts it to a platform specific one
		static const char* HK_CALL getFilePath( hkStringBuf& inout );
		static const char* HK_CALL getFilePath( const char* pathIn, hkStringBuf& pathOut);

					/// This class takes a general filename and converts it to a platform specific one
		static const char* HK_CALL getFilePath( hkStringBuf& inout, hkStructureLayout::LayoutRules rules );
};

#endif // ASSET_MGT_UTIL_H

/*
 * Havok SDK - NO SOURCE PC DOWNLOAD, BUILD(#20140907)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2014
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available at www.havok.com/tryhavok.
 * 
 */
