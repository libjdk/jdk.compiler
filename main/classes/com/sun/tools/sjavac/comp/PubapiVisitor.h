#ifndef _com_sun_tools_sjavac_comp_PubapiVisitor_h_
#define _com_sun_tools_sjavac_comp_PubapiVisitor_h_
//$ class com.sun.tools.sjavac.comp.PubapiVisitor
//$ extends javax.lang.model.util.ElementScanner14

#include <javax/lang/model/util/ElementScanner14.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {
					class PubApi;
					class PubApiTypeParam;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class ExecutableElement;
				class RecordComponentElement;
				class TypeElement;
				class TypeParameterElement;
				class VariableElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PubapiVisitor : public ::javax::lang::model::util::ElementScanner14 {
	$class(PubapiVisitor, $NO_CLASS_INIT, ::javax::lang::model::util::ElementScanner14)
public:
	PubapiVisitor();
	void init$();
	static $String* encodeChar(int32_t c);
	virtual ::com::sun::tools::sjavac::pubapi::PubApi* getCollectedPubApi();
	::java::util::List* getParamTypes(::javax::lang::model::element::ExecutableElement* e);
	::java::util::List* getTypeDescs(::java::util::List* list);
	::java::util::List* getTypeParameters(::java::util::List* elements);
	bool isAnonymous(::javax::lang::model::element::TypeElement* e);
	bool isNonPrivate(::javax::lang::model::element::Element* e);
	::com::sun::tools::sjavac::pubapi::PubApiTypeParam* lambda$getTypeParameters$0(::javax::lang::model::element::TypeParameterElement* e);
	virtual ::java::lang::Void* visitExecutable(::javax::lang::model::element::ExecutableElement* e, ::java::lang::Void* p);
	virtual $Object* visitExecutable(::javax::lang::model::element::ExecutableElement* e, Object$* p) override;
	virtual ::java::lang::Void* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, ::java::lang::Void* p);
	virtual $Object* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, Object$* p) override;
	virtual ::java::lang::Void* visitType(::javax::lang::model::element::TypeElement* e, ::java::lang::Void* p);
	virtual $Object* visitType(::javax::lang::model::element::TypeElement* e, Object$* p) override;
	virtual ::java::lang::Void* visitVariable(::javax::lang::model::element::VariableElement* e, ::java::lang::Void* p);
	virtual $Object* visitVariable(::javax::lang::model::element::VariableElement* e, Object$* p) override;
	::com::sun::tools::sjavac::pubapi::PubApi* collectedApi = nullptr;
};

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_comp_PubapiVisitor_h_