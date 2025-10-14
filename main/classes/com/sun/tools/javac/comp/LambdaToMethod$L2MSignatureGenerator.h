#ifndef _com_sun_tools_javac_comp_LambdaToMethod$L2MSignatureGenerator_h_
#define _com_sun_tools_javac_comp_LambdaToMethod$L2MSignatureGenerator_h_
//$ class com.sun.tools.javac.comp.LambdaToMethod$L2MSignatureGenerator
//$ extends com.sun.tools.javac.code.Types$SignatureGenerator

#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class LambdaToMethod;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class LambdaToMethod$L2MSignatureGenerator : public ::com::sun::tools::javac::code::Types$SignatureGenerator {
	$class(LambdaToMethod$L2MSignatureGenerator, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SignatureGenerator)
public:
	LambdaToMethod$L2MSignatureGenerator();
	void init$(::com::sun::tools::javac::comp::LambdaToMethod* this$0, bool allowIllegalSignatures);
	virtual void append(char16_t ch) override;
	virtual void append($bytes* ba) override;
	virtual void append(::com::sun::tools::javac::util::Name* name) override;
	virtual void reportIllegalSignature(::com::sun::tools::javac::code::Type* t) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::LambdaToMethod* this$0 = nullptr;
	::java::lang::StringBuilder* sb = nullptr;
	bool allowIllegalSignatures = false;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_LambdaToMethod$L2MSignatureGenerator_h_