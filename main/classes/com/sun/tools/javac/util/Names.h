#ifndef _com_sun_tools_javac_util_Names_h_
#define _com_sun_tools_javac_util_Names_h_
//$ class com.sun.tools.javac.util.Names
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ANNOTATION_TYPE")
#undef ANNOTATION_TYPE
#pragma push_macro("CLASS")
#undef CLASS
#pragma push_macro("CONSTRUCTOR")
#undef CONSTRUCTOR
#pragma push_macro("FIELD")
#undef FIELD
#pragma push_macro("LOCAL_VARIABLE")
#undef LOCAL_VARIABLE
#pragma push_macro("METHOD")
#undef METHOD
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("PARAMETER")
#undef PARAMETER
#pragma push_macro("RECORD_COMPONENT")
#undef RECORD_COMPONENT
#pragma push_macro("RUNTIME")
#undef RUNTIME
#pragma push_macro("SOURCE")
#undef SOURCE
#pragma push_macro("T")
#undef T
#pragma push_macro("TYPE")
#undef TYPE
#pragma push_macro("TYPE_PARAMETER")
#undef TYPE_PARAMETER
#pragma push_macro("TYPE_USE")
#undef TYPE_USE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Context$Key;
					class Name;
					class Name$Table;
					class Options;
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

class $export Names : public ::java::lang::Object {
	$class(Names, 0, ::java::lang::Object)
public:
	Names();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::util::Name$Table* createTable(::com::sun::tools::javac::util::Options* options);
	virtual void dispose();
	virtual ::com::sun::tools::javac::util::Name* fromChars($chars* cs, int32_t start, int32_t len);
	virtual ::com::sun::tools::javac::util::Name* fromString($String* s);
	virtual ::com::sun::tools::javac::util::Name* fromUtf($bytes* cs);
	virtual ::com::sun::tools::javac::util::Name* fromUtf($bytes* cs, int32_t start, int32_t len);
	static ::com::sun::tools::javac::util::Names* instance(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::util::Context$Key* namesKey;
	::com::sun::tools::javac::util::Name* asterisk = nullptr;
	::com::sun::tools::javac::util::Name* comma = nullptr;
	::com::sun::tools::javac::util::Name* empty = nullptr;
	::com::sun::tools::javac::util::Name* hyphen = nullptr;
	::com::sun::tools::javac::util::Name* one = nullptr;
	::com::sun::tools::javac::util::Name* slash = nullptr;
	::com::sun::tools::javac::util::Name* _class = nullptr;
	::com::sun::tools::javac::util::Name* _super = nullptr;
	::com::sun::tools::javac::util::Name* _this = nullptr;
	::com::sun::tools::javac::util::Name* var = nullptr;
	::com::sun::tools::javac::util::Name* exports = nullptr;
	::com::sun::tools::javac::util::Name* opens = nullptr;
	::com::sun::tools::javac::util::Name* module = nullptr;
	::com::sun::tools::javac::util::Name* provides = nullptr;
	::com::sun::tools::javac::util::Name* requires = nullptr;
	::com::sun::tools::javac::util::Name* to = nullptr;
	::com::sun::tools::javac::util::Name* transitive = nullptr;
	::com::sun::tools::javac::util::Name* uses = nullptr;
	::com::sun::tools::javac::util::Name* open = nullptr;
	::com::sun::tools::javac::util::Name* with = nullptr;
	::com::sun::tools::javac::util::Name* yield = nullptr;
	::com::sun::tools::javac::util::Name* _name = nullptr;
	::com::sun::tools::javac::util::Name* addSuppressed = nullptr;
	::com::sun::tools::javac::util::Name* any = nullptr;
	::com::sun::tools::javac::util::Name* append = nullptr;
	::com::sun::tools::javac::util::Name* clinit = nullptr;
	::com::sun::tools::javac::util::Name* clone$ = nullptr;
	::com::sun::tools::javac::util::Name* close = nullptr;
	::com::sun::tools::javac::util::Name* deserializeLambda = nullptr;
	::com::sun::tools::javac::util::Name* desiredAssertionStatus = nullptr;
	::com::sun::tools::javac::util::Name* equals$ = nullptr;
	::com::sun::tools::javac::util::Name* error = nullptr;
	::com::sun::tools::javac::util::Name* finalize$ = nullptr;
	::com::sun::tools::javac::util::Name* forRemoval = nullptr;
	::com::sun::tools::javac::util::Name* reflective = nullptr;
	::com::sun::tools::javac::util::Name* getClass$ = nullptr;
	::com::sun::tools::javac::util::Name* hasNext = nullptr;
	::com::sun::tools::javac::util::Name* hashCode$ = nullptr;
	::com::sun::tools::javac::util::Name* init = nullptr;
	::com::sun::tools::javac::util::Name* iterator = nullptr;
	::com::sun::tools::javac::util::Name* length = nullptr;
	::com::sun::tools::javac::util::Name* next = nullptr;
	::com::sun::tools::javac::util::Name* ordinal = nullptr;
	::com::sun::tools::javac::util::Name* provider = nullptr;
	::com::sun::tools::javac::util::Name* serialVersionUID = nullptr;
	::com::sun::tools::javac::util::Name* toString$ = nullptr;
	::com::sun::tools::javac::util::Name* value = nullptr;
	::com::sun::tools::javac::util::Name* valueOf = nullptr;
	::com::sun::tools::javac::util::Name* values = nullptr;
	::com::sun::tools::javac::util::Name* readResolve = nullptr;
	::com::sun::tools::javac::util::Name* readObject = nullptr;
	::com::sun::tools::javac::util::Name* java_io_Serializable = nullptr;
	::com::sun::tools::javac::util::Name* java_lang_Class = nullptr;
	::com::sun::tools::javac::util::Name* java_lang_Cloneable = nullptr;
	::com::sun::tools::javac::util::Name* java_lang_Enum = nullptr;
	::com::sun::tools::javac::util::Name* java_lang_Object = nullptr;
	::com::sun::tools::javac::util::Name* Array = nullptr;
	::com::sun::tools::javac::util::Name* Bound = nullptr;
	::com::sun::tools::javac::util::Name* Method = nullptr;
	::com::sun::tools::javac::util::Name* java = nullptr;
	::com::sun::tools::javac::util::Name* java_lang = nullptr;
	::com::sun::tools::javac::util::Name* java_base = nullptr;
	::com::sun::tools::javac::util::Name* Annotation = nullptr;
	::com::sun::tools::javac::util::Name* AnnotationDefault = nullptr;
	::com::sun::tools::javac::util::Name* BootstrapMethods = nullptr;
	::com::sun::tools::javac::util::Name* Bridge = nullptr;
	::com::sun::tools::javac::util::Name* CharacterRangeTable = nullptr;
	::com::sun::tools::javac::util::Name* Code = nullptr;
	::com::sun::tools::javac::util::Name* CompilationID = nullptr;
	::com::sun::tools::javac::util::Name* ConstantValue = nullptr;
	::com::sun::tools::javac::util::Name* Deprecated = nullptr;
	::com::sun::tools::javac::util::Name* EnclosingMethod = nullptr;
	::com::sun::tools::javac::util::Name* Enum = nullptr;
	::com::sun::tools::javac::util::Name* Exceptions = nullptr;
	::com::sun::tools::javac::util::Name* InnerClasses = nullptr;
	::com::sun::tools::javac::util::Name* LineNumberTable = nullptr;
	::com::sun::tools::javac::util::Name* LocalVariableTable = nullptr;
	::com::sun::tools::javac::util::Name* LocalVariableTypeTable = nullptr;
	::com::sun::tools::javac::util::Name* MethodParameters = nullptr;
	::com::sun::tools::javac::util::Name* Module = nullptr;
	::com::sun::tools::javac::util::Name* ModuleResolution = nullptr;
	::com::sun::tools::javac::util::Name* NestHost = nullptr;
	::com::sun::tools::javac::util::Name* NestMembers = nullptr;
	::com::sun::tools::javac::util::Name* Record = nullptr;
	::com::sun::tools::javac::util::Name* RuntimeInvisibleAnnotations = nullptr;
	::com::sun::tools::javac::util::Name* RuntimeInvisibleParameterAnnotations = nullptr;
	::com::sun::tools::javac::util::Name* RuntimeInvisibleTypeAnnotations = nullptr;
	::com::sun::tools::javac::util::Name* RuntimeVisibleAnnotations = nullptr;
	::com::sun::tools::javac::util::Name* RuntimeVisibleParameterAnnotations = nullptr;
	::com::sun::tools::javac::util::Name* RuntimeVisibleTypeAnnotations = nullptr;
	::com::sun::tools::javac::util::Name* Signature = nullptr;
	::com::sun::tools::javac::util::Name* SourceFile = nullptr;
	::com::sun::tools::javac::util::Name* SourceID = nullptr;
	::com::sun::tools::javac::util::Name* StackMap = nullptr;
	::com::sun::tools::javac::util::Name* StackMapTable = nullptr;
	::com::sun::tools::javac::util::Name* Synthetic = nullptr;
	::com::sun::tools::javac::util::Name* Value = nullptr;
	::com::sun::tools::javac::util::Name* Varargs = nullptr;
	::com::sun::tools::javac::util::Name* PermittedSubclasses = nullptr;
	::com::sun::tools::javac::util::Name* ANNOTATION_TYPE = nullptr;
	::com::sun::tools::javac::util::Name* CONSTRUCTOR = nullptr;
	::com::sun::tools::javac::util::Name* FIELD = nullptr;
	::com::sun::tools::javac::util::Name* LOCAL_VARIABLE = nullptr;
	::com::sun::tools::javac::util::Name* METHOD = nullptr;
	::com::sun::tools::javac::util::Name* MODULE = nullptr;
	::com::sun::tools::javac::util::Name* PACKAGE = nullptr;
	::com::sun::tools::javac::util::Name* PARAMETER = nullptr;
	::com::sun::tools::javac::util::Name* TYPE = nullptr;
	::com::sun::tools::javac::util::Name* TYPE_PARAMETER = nullptr;
	::com::sun::tools::javac::util::Name* TYPE_USE = nullptr;
	::com::sun::tools::javac::util::Name* RECORD_COMPONENT = nullptr;
	::com::sun::tools::javac::util::Name* CLASS = nullptr;
	::com::sun::tools::javac::util::Name* RUNTIME = nullptr;
	::com::sun::tools::javac::util::Name* SOURCE = nullptr;
	::com::sun::tools::javac::util::Name* T = nullptr;
	::com::sun::tools::javac::util::Name* ex = nullptr;
	::com::sun::tools::javac::util::Name* module_info = nullptr;
	::com::sun::tools::javac::util::Name* package_info = nullptr;
	::com::sun::tools::javac::util::Name* requireNonNull = nullptr;
	::com::sun::tools::javac::util::Name* lambda = nullptr;
	::com::sun::tools::javac::util::Name* metafactory = nullptr;
	::com::sun::tools::javac::util::Name* altMetafactory = nullptr;
	::com::sun::tools::javac::util::Name* dollarThis = nullptr;
	::com::sun::tools::javac::util::Name* makeConcat = nullptr;
	::com::sun::tools::javac::util::Name* makeConcatWithConstants = nullptr;
	::com::sun::tools::javac::util::Name* bootstrap = nullptr;
	::com::sun::tools::javac::util::Name* record = nullptr;
	::com::sun::tools::javac::util::Name* non = nullptr;
	::com::sun::tools::javac::util::Name* serialPersistentFields = nullptr;
	::com::sun::tools::javac::util::Name* writeObject = nullptr;
	::com::sun::tools::javac::util::Name* writeReplace = nullptr;
	::com::sun::tools::javac::util::Name* readObjectNoData = nullptr;
	::com::sun::tools::javac::util::Name* permits = nullptr;
	::com::sun::tools::javac::util::Name* sealed = nullptr;
	::com::sun::tools::javac::util::Name* typeSwitch = nullptr;
	::com::sun::tools::javac::util::Name* enumSwitch = nullptr;
	::com::sun::tools::javac::util::Name$Table* table = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ANNOTATION_TYPE")
#pragma pop_macro("CLASS")
#pragma pop_macro("CONSTRUCTOR")
#pragma pop_macro("FIELD")
#pragma pop_macro("LOCAL_VARIABLE")
#pragma pop_macro("METHOD")
#pragma pop_macro("MODULE")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("PARAMETER")
#pragma pop_macro("RECORD_COMPONENT")
#pragma pop_macro("RUNTIME")
#pragma pop_macro("SOURCE")
#pragma pop_macro("T")
#pragma pop_macro("TYPE")
#pragma pop_macro("TYPE_PARAMETER")
#pragma pop_macro("TYPE_USE")

#endif // _com_sun_tools_javac_util_Names_h_