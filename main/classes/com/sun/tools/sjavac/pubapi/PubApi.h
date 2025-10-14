#ifndef _com_sun_tools_sjavac_pubapi_PubApi_h_
#define _com_sun_tools_sjavac_pubapi_PubApi_h_
//$ class com.sun.tools.sjavac.pubapi.PubApi
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("METHOD_PATTERN")
#undef METHOD_PATTERN
#pragma push_macro("MODIFIERS")
#undef MODIFIERS
#pragma push_macro("MOD_PATTERN")
#undef MOD_PATTERN
#pragma push_macro("TYPE_PATTERN")
#undef TYPE_PATTERN
#pragma push_macro("VAR_PATTERN")
#undef VAR_PATTERN

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {
					class PubApiTypeParam;
					class PubMethod;
					class PubType;
					class PubVar;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Modifier;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace pubapi {

class PubApi : public ::java::io::Serializable {
	$class(PubApi, 0, ::java::io::Serializable)
public:
	PubApi();
	void init$();
	void init$(::java::util::Collection* types, ::java::util::Collection* variables, ::java::util::Collection* methods);
	virtual void addPubMethod(::com::sun::tools::sjavac::pubapi::PubMethod* m);
	virtual void addPubType(::com::sun::tools::sjavac::pubapi::PubType* t);
	virtual void addPubVar(::com::sun::tools::sjavac::pubapi::PubVar* v);
	virtual void appendItem($String* l);
	virtual ::java::util::List* asListOfStrings();
	static $String* asString(::java::util::Set* modifiers);
	static $String* commaSeparated(::java::util::List* typeDescs);
	virtual ::java::util::List* diff(::com::sun::tools::sjavac::pubapi::PubApi* prevApi);
	::java::util::List* diff($String* scopePrefix, ::com::sun::tools::sjavac::pubapi::PubApi* prevApi);
	virtual bool equals(Object$* obj) override;
	static int32_t findClosingTag($String* l, int32_t pos);
	virtual int32_t hashCode() override;
	virtual bool isBackwardCompatibleWith(::com::sun::tools::sjavac::pubapi::PubApi* older);
	virtual bool isEmpty();
	static void lambda$asListOfStrings$1(::java::util::List* lines, ::com::sun::tools::sjavac::pubapi::PubType* type);
	static $String* lambda$asString$2(::javax::lang::model::element::Modifier* mod);
	static bool lambda$parseModifiers$3($String* s);
	static $String* lambda$varLine$0($String* v);
	static ::com::sun::tools::sjavac::pubapi::PubApi* mergeTypes(::com::sun::tools::sjavac::pubapi::PubApi* api1, ::com::sun::tools::sjavac::pubapi::PubApi* api2);
	static $String* methodLine(::com::sun::tools::sjavac::pubapi::PubMethod* method);
	virtual ::java::util::Set* parseModifiers($String* modifiers);
	static ::java::util::List* parseTypeDescs(::java::util::List* strs);
	static ::com::sun::tools::sjavac::pubapi::PubApiTypeParam* parseTypeParam($String* typeParamString);
	static ::java::util::List* parseTypeParams(::java::util::List* strs);
	static ::java::util::List* splitOnTopLevelChars($String* s, char16_t split);
	virtual ::java::util::List* splitOnTopLevelCommas($String* s);
	virtual $String* toString() override;
	static $String* typeLine(::com::sun::tools::sjavac::pubapi::PubType* type);
	static $String* varLine(::com::sun::tools::sjavac::pubapi::PubVar* var);
	static const int64_t serialVersionUID = (int64_t)0x523F9C2C15DA5722;
	::java::util::Map* types = nullptr;
	::java::util::Map* variables = nullptr;
	::java::util::Map* methods = nullptr;
	::java::util::Map* recordComponents = nullptr;
	::com::sun::tools::sjavac::pubapi::PubType* lastInsertedType = nullptr;
	static $String* MODIFIERS;
	static ::java::util::regex::Pattern* MOD_PATTERN;
	static ::java::util::regex::Pattern* METHOD_PATTERN;
	static ::java::util::regex::Pattern* VAR_PATTERN;
	static ::java::util::regex::Pattern* TYPE_PATTERN;
};

				} // pubapi
			} // sjavac
		} // tools
	} // sun
} // com

#pragma pop_macro("METHOD_PATTERN")
#pragma pop_macro("MODIFIERS")
#pragma pop_macro("MOD_PATTERN")
#pragma pop_macro("TYPE_PATTERN")
#pragma pop_macro("VAR_PATTERN")

#endif // _com_sun_tools_sjavac_pubapi_PubApi_h_