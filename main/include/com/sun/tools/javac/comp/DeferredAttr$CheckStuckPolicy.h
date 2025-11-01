#ifndef _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy_h_
#define _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy_h_
//$ class com.sun.tools.javac.comp.DeferredAttr$CheckStuckPolicy
//$ extends com.sun.tools.javac.comp.DeferredAttr$PolyScanner
//$ implements com.sun.tools.javac.comp.DeferredAttr$DeferredStuckPolicy,com.sun.tools.javac.comp.Infer$FreeTypeListener

#include <com/sun/tools/javac/comp/DeferredAttr$DeferredStuckPolicy.h>
#include <com/sun/tools/javac/comp/DeferredAttr$PolyScanner.h>
#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>

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
					class Attr$ResultInfo;
					class DeferredAttr;
					class DeferredAttr$DeferredType;
					class InferenceContext;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCLambda;
					class JCTree$JCMemberReference;
					class JCTree$JCSwitchExpression;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import DeferredAttr$CheckStuckPolicy : public ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner, public ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy, public ::com::sun::tools::javac::comp::Infer$FreeTypeListener {
	$class(DeferredAttr$CheckStuckPolicy, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner, ::com::sun::tools::javac::comp::DeferredAttr$DeferredStuckPolicy, ::com::sun::tools::javac::comp::Infer$FreeTypeListener)
public:
	DeferredAttr$CheckStuckPolicy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::comp::DeferredAttr* this$0, ::com::sun::tools::javac::comp::Attr$ResultInfo* resultInfo, ::com::sun::tools::javac::comp::DeferredAttr$DeferredType* dt);
	virtual ::java::util::Set* depVars() override;
	virtual bool isStuck() override;
	using ::com::sun::tools::javac::comp::DeferredAttr$PolyScanner::scan;
	virtual void scanLambdaBody(::com::sun::tools::javac::tree::JCTree$JCLambda* lambda, ::com::sun::tools::javac::code::Type* pt);
	virtual ::java::util::Set* stuckVars() override;
	virtual $String* toString() override;
	virtual void typesInferred(::com::sun::tools::javac::comp::InferenceContext* inferenceContext) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitReference(::com::sun::tools::javac::tree::JCTree$JCMemberReference* tree) override;
	virtual void visitSwitchExpression(::com::sun::tools::javac::tree::JCTree$JCSwitchExpression* expr) override;
	::com::sun::tools::javac::comp::DeferredAttr* this$0 = nullptr;
	::com::sun::tools::javac::code::Type* pt = nullptr;
	::com::sun::tools::javac::comp::InferenceContext* inferenceContext = nullptr;
	::java::util::Set* stuckVars$ = nullptr;
	::java::util::Set* depVars$ = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_DeferredAttr$CheckStuckPolicy_h_