#ifndef _com_sun_tools_javac_code_Symtab_h_
#define _com_sun_tools_javac_code_Symtab_h_
//$ class com.sun.tools.javac.code.Symtab
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Directive$RequiresDirective;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$Completer;
					class Symbol$MethodSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
					class Type;
					class Type$JCPrimitiveType;
					class Type$JCVoidType;
					class Types;
					class Types$UniqueType;
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
					class Context;
					class Context$Key;
					class JavacMessages;
					class List;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $import Symtab : public ::java::lang::Object {
	$class(Symtab, 0, ::java::lang::Object)
public:
	Symtab();
	void init$(::com::sun::tools::javac::util::Context* context);
	void addRootPackageFor(::com::sun::tools::javac::code::Symbol$ModuleSymbol* module);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* defineClass(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol* owner);
	void doEnterClass(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::code::Symbol$ClassSymbol* cs);
	void doEnterPackage(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::code::Symbol$PackageSymbol* pack);
	::com::sun::tools::javac::code::Type* enterClass($String* s);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* enterClass(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* owner);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* enterClass(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* flatname);
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* enterModule(::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol$PackageSymbol* enterPackage(::com::sun::tools::javac::code::Symbol$ModuleSymbol* currModule, ::com::sun::tools::javac::util::Name* fullname);
	::com::sun::tools::javac::code::Type* enterSyntheticAnnotation($String* name);
	virtual ::java::lang::Iterable* getAllClasses();
	virtual ::java::util::Collection* getAllModules();
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* getClass(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* flatName);
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* getClassField(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Types* types);
	virtual ::java::lang::Iterable* getClassesForName(::com::sun::tools::javac::util::Name* candidate);
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* getModule(::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol$PackageSymbol* getPackage(::com::sun::tools::javac::code::Symbol$ModuleSymbol* module, ::com::sun::tools::javac::util::Name* fullname);
	virtual ::java::lang::Iterable* getPackagesForName(::com::sun::tools::javac::util::Name* candidate);
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* inferModule(::com::sun::tools::javac::util::Name* packageName);
	virtual void initType(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void initType(::com::sun::tools::javac::code::Type* type, $String* name);
	virtual void initType(::com::sun::tools::javac::code::Type* type, $String* name, $String* bname);
	static ::com::sun::tools::javac::code::Symtab* instance(::com::sun::tools::javac::util::Context* context);
	void lambda$addRootPackageFor$8(::com::sun::tools::javac::code::Symbol* s);
	static ::java::util::Map* lambda$doEnterClass$5(::com::sun::tools::javac::util::Name* n);
	void lambda$enterModule$9(::com::sun::tools::javac::code::Symbol* s);
	static $String* lambda$enterPackage$6(::com::sun::tools::javac::code::Symbol$ModuleSymbol* currModule);
	static ::java::util::Iterator* lambda$getAllClasses$3(::java::util::Map* v);
	::java::util::Iterator* lambda$getAllClasses$4();
	::com::sun::tools::javac::code::Symbol$VarSymbol* lambda$getClassField$0(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::code::Types$UniqueType* k);
	static ::com::sun::tools::javac::code::Symbol$ModuleSymbol* lambda$lookupPackage$1(::com::sun::tools::javac::code::Directive$RequiresDirective* rd);
	bool lambda$lookupPackage$2(::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod);
	virtual ::com::sun::tools::javac::util::List* listPackageModules(::com::sun::tools::javac::util::Name* packageName);
	virtual ::com::sun::tools::javac::code::Symbol$PackageSymbol* lookupPackage(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* flatName);
	::com::sun::tools::javac::code::Symbol$PackageSymbol* lookupPackage(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* flatName, bool onlyExisting);
	virtual bool packageExists(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* fullname);
	virtual void removeClass(::com::sun::tools::javac::code::Symbol$ModuleSymbol* msym, ::com::sun::tools::javac::util::Name* flatName);
	virtual void synthesizeBoxTypeIfMissing(::com::sun::tools::javac::code::Type* type);
	virtual void synthesizeEmptyInterfaceIfMissing(::com::sun::tools::javac::code::Type* type);
	static ::com::sun::tools::javac::util::Context$Key* symtabKey;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* byteType = nullptr;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* charType = nullptr;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* shortType = nullptr;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* intType = nullptr;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* longType = nullptr;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* floatType = nullptr;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* doubleType = nullptr;
	::com::sun::tools::javac::code::Type$JCPrimitiveType* booleanType = nullptr;
	::com::sun::tools::javac::code::Type* botType = nullptr;
	::com::sun::tools::javac::code::Type$JCVoidType* voidType = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::util::JavacMessages* messages = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* initialCompleter = nullptr;
	::com::sun::tools::javac::code::Symbol$Completer* moduleCompleter = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* unnamedModule = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* errModule = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* noModule = nullptr;
	::com::sun::tools::javac::code::Symbol$PackageSymbol* rootPackage = nullptr;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* noSymbol = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* errSymbol = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* unknownSymbol = nullptr;
	::com::sun::tools::javac::code::Type* errType = nullptr;
	::com::sun::tools::javac::code::Type* unknownType = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* arrayClass = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* arrayCloneMethod = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* boundClass = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* methodClass = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* java_base = nullptr;
	::com::sun::tools::javac::code::Type* objectType = nullptr;
	::com::sun::tools::javac::code::Type* objectMethodsType = nullptr;
	::com::sun::tools::javac::code::Type* objectsType = nullptr;
	::com::sun::tools::javac::code::Type* classType = nullptr;
	::com::sun::tools::javac::code::Type* classLoaderType = nullptr;
	::com::sun::tools::javac::code::Type* stringType = nullptr;
	::com::sun::tools::javac::code::Type* stringBufferType = nullptr;
	::com::sun::tools::javac::code::Type* stringBuilderType = nullptr;
	::com::sun::tools::javac::code::Type* cloneableType = nullptr;
	::com::sun::tools::javac::code::Type* serializableType = nullptr;
	::com::sun::tools::javac::code::Type* serializedLambdaType = nullptr;
	::com::sun::tools::javac::code::Type* varHandleType = nullptr;
	::com::sun::tools::javac::code::Type* methodHandleType = nullptr;
	::com::sun::tools::javac::code::Type* methodHandleLookupType = nullptr;
	::com::sun::tools::javac::code::Type* methodTypeType = nullptr;
	::com::sun::tools::javac::code::Type* nativeHeaderType = nullptr;
	::com::sun::tools::javac::code::Type* throwableType = nullptr;
	::com::sun::tools::javac::code::Type* errorType = nullptr;
	::com::sun::tools::javac::code::Type* interruptedExceptionType = nullptr;
	::com::sun::tools::javac::code::Type* illegalArgumentExceptionType = nullptr;
	::com::sun::tools::javac::code::Type* exceptionType = nullptr;
	::com::sun::tools::javac::code::Type* runtimeExceptionType = nullptr;
	::com::sun::tools::javac::code::Type* classNotFoundExceptionType = nullptr;
	::com::sun::tools::javac::code::Type* noClassDefFoundErrorType = nullptr;
	::com::sun::tools::javac::code::Type* noSuchFieldErrorType = nullptr;
	::com::sun::tools::javac::code::Type* assertionErrorType = nullptr;
	::com::sun::tools::javac::code::Type* incompatibleClassChangeErrorType = nullptr;
	::com::sun::tools::javac::code::Type* cloneNotSupportedExceptionType = nullptr;
	::com::sun::tools::javac::code::Type* annotationType = nullptr;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* enumSym = nullptr;
	::com::sun::tools::javac::code::Type* listType = nullptr;
	::com::sun::tools::javac::code::Type* collectionsType = nullptr;
	::com::sun::tools::javac::code::Type* comparableType = nullptr;
	::com::sun::tools::javac::code::Type* comparatorType = nullptr;
	::com::sun::tools::javac::code::Type* arraysType = nullptr;
	::com::sun::tools::javac::code::Type* iterableType = nullptr;
	::com::sun::tools::javac::code::Type* iteratorType = nullptr;
	::com::sun::tools::javac::code::Type* annotationTargetType = nullptr;
	::com::sun::tools::javac::code::Type* overrideType = nullptr;
	::com::sun::tools::javac::code::Type* retentionType = nullptr;
	::com::sun::tools::javac::code::Type* deprecatedType = nullptr;
	::com::sun::tools::javac::code::Type* suppressWarningsType = nullptr;
	::com::sun::tools::javac::code::Type* supplierType = nullptr;
	::com::sun::tools::javac::code::Type* inheritedType = nullptr;
	::com::sun::tools::javac::code::Type* profileType = nullptr;
	::com::sun::tools::javac::code::Type* proprietaryType = nullptr;
	::com::sun::tools::javac::code::Type* systemType = nullptr;
	::com::sun::tools::javac::code::Type* autoCloseableType = nullptr;
	::com::sun::tools::javac::code::Type* trustMeType = nullptr;
	::com::sun::tools::javac::code::Type* lambdaMetafactory = nullptr;
	::com::sun::tools::javac::code::Type* stringConcatFactory = nullptr;
	::com::sun::tools::javac::code::Type* repeatableType = nullptr;
	::com::sun::tools::javac::code::Type* documentedType = nullptr;
	::com::sun::tools::javac::code::Type* elementTypeType = nullptr;
	::com::sun::tools::javac::code::Type* functionalInterfaceType = nullptr;
	::com::sun::tools::javac::code::Type* previewFeatureType = nullptr;
	::com::sun::tools::javac::code::Type* previewFeatureInternalType = nullptr;
	::com::sun::tools::javac::code::Type* typeDescriptorType = nullptr;
	::com::sun::tools::javac::code::Type* recordType = nullptr;
	::com::sun::tools::javac::code::Type* switchBootstrapsType = nullptr;
	::com::sun::tools::javac::code::Type* valueBasedType = nullptr;
	::com::sun::tools::javac::code::Type* valueBasedInternalType = nullptr;
	::com::sun::tools::javac::code::Symbol$VarSymbol* lengthVar = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* enumFinalFinalize = nullptr;
	::com::sun::tools::javac::code::Symbol$MethodSymbol* autoCloseableClose = nullptr;
	$Array<::com::sun::tools::javac::code::Type>* typeOfTag = nullptr;
	$Array<::com::sun::tools::javac::util::Name>* boxedName = nullptr;
	::java::util::Map* classes = nullptr;
	::java::util::Map* packages = nullptr;
	::java::util::Map* modules = nullptr;
	::java::util::Map* classFields = nullptr;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* predefClass = nullptr;
	static ::java::util::Map* EMPTY;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EMPTY")

#endif // _com_sun_tools_javac_code_Symtab_h_