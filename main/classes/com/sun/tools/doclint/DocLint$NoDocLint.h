#ifndef _com_sun_tools_doclint_DocLint$NoDocLint_h_
#define _com_sun_tools_doclint_DocLint$NoDocLint_h_
//$ class com.sun.tools.doclint.DocLint$NoDocLint
//$ extends com.sun.tools.doclint.DocLint

#include <com/sun/tools/doclint/DocLint.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class JavacTask;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

class DocLint$NoDocLint : public ::com::sun::tools::doclint::DocLint {
	$class(DocLint$NoDocLint, $NO_CLASS_INIT, ::com::sun::tools::doclint::DocLint)
public:
	DocLint$NoDocLint();
	void init$();
	virtual $String* getName() override;
	virtual void init(::com::sun::source::util::JavacTask* task, $StringArray* args) override;
	virtual bool isValidOption($String* s) override;
};

			} // doclint
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_doclint_DocLint$NoDocLint_h_