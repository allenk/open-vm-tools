/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef AttachmentXml_h_
#define AttachmentXml_h_


#include "Doc/CafCoreTypesDoc/CAttachmentDoc.h"

#include "Doc/DocXml/CafCoreTypesXml/CafCoreTypesXmlLink.h"
#include "Xml/XmlUtils/CXmlElement.h"

namespace Caf {

	/// Streams the Attachment class to/from XML
	namespace AttachmentXml {

		/// Adds the AttachmentDoc into the XML.
		void CAFCORETYPESXML_LINKAGE add(
			const SmartPtrCAttachmentDoc attachmentDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the AttachmentDoc from the XML.
		SmartPtrCAttachmentDoc CAFCORETYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif
