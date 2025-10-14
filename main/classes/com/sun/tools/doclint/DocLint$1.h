#ifndef _com_sun_tools_doclint_DocLint$1_h_
#define _com_sun_tools_doclint_DocLint$1_h_
//$ class com.sun.tools.doclint.DocLint$1
//$ extends java.util.ServiceLoader$Provider

#include <java/util/ServiceLoader$Provider.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

class DocLint$1 : public ::java::util::ServiceLoader$Provider {
	$class(DocLint$1, $NO_CLASS_INIT, ::java::util::ServiceLoader$Provider)
public:
	DocLint$1();
	void init$();
	virtual $Object* get() override;
	virtual $Class* type() override;
};

			} // doclint
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_doclint_DocLint$1_h_