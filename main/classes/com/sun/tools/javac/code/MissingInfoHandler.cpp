#include <com/sun/tools/javac/code/MissingInfoHandler.h>

#include <com/sun/source/util/ParameterNameProvider.h>
#include <com/sun/tools/javac/code/Symbol$ParamSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/VariableElement.h>
#include <jcpp.h>

using $ParameterNameProvider = ::com::sun::source::util::ParameterNameProvider;
using $Symbol$ParamSymbol = ::com::sun::tools::javac::code::Symbol$ParamSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VariableElement = ::javax::lang::model::element::VariableElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _MissingInfoHandler_FieldInfo_[] = {
	{"missingInfoHandlerWrapperKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/MissingInfoHandler;>;", $PROTECTED | $STATIC | $FINAL, $staticField(MissingInfoHandler, missingInfoHandlerWrapperKey)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(MissingInfoHandler, names)},
	{"parameterNameProvider", "Lcom/sun/source/util/ParameterNameProvider;", nullptr, $PRIVATE, $field(MissingInfoHandler, parameterNameProvider)},
	{}
};

$MethodInfo _MissingInfoHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(MissingInfoHandler::*)($Context*)>(&MissingInfoHandler::init$))},
	{"getParameterName", "(Lcom/sun/tools/javac/code/Symbol$ParamSymbol;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/MissingInfoHandler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MissingInfoHandler*(*)($Context*)>(&MissingInfoHandler::instance))},
	{"setDelegate", "(Lcom/sun/source/util/ParameterNameProvider;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MissingInfoHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.MissingInfoHandler",
	"java.lang.Object",
	nullptr,
	_MissingInfoHandler_FieldInfo_,
	_MissingInfoHandler_MethodInfo_
};

$Object* allocate$MissingInfoHandler($Class* clazz) {
	return $of($alloc(MissingInfoHandler));
}

$Context$Key* MissingInfoHandler::missingInfoHandlerWrapperKey = nullptr;

MissingInfoHandler* MissingInfoHandler::instance($Context* context) {
	$init(MissingInfoHandler);
	$var(MissingInfoHandler, instance, $cast(MissingInfoHandler, $nc(context)->get(MissingInfoHandler::missingInfoHandlerWrapperKey)));
	if (instance == nullptr) {
		$assign(instance, $new(MissingInfoHandler, context));
	}
	return instance;
}

void MissingInfoHandler::init$($Context* context) {
	$nc(context)->put(MissingInfoHandler::missingInfoHandlerWrapperKey, $of(this));
	$set(this, names, $Names::instance(context));
}

$Name* MissingInfoHandler::getParameterName($Symbol$ParamSymbol* parameter) {
	$useLocalCurrentObjectStackCache();
	if (this->parameterNameProvider != nullptr) {
		$var($CharSequence, name, $nc(this->parameterNameProvider)->getParameterName(parameter));
		if (name != nullptr) {
			return $nc(this->names)->fromString($(name->toString()));
		}
	}
	return nullptr;
}

void MissingInfoHandler::setDelegate($ParameterNameProvider* delegate) {
	$set(this, parameterNameProvider, delegate);
}

void clinit$MissingInfoHandler($Class* class$) {
	$assignStatic(MissingInfoHandler::missingInfoHandlerWrapperKey, $new($Context$Key));
}

MissingInfoHandler::MissingInfoHandler() {
}

$Class* MissingInfoHandler::load$($String* name, bool initialize) {
	$loadClass(MissingInfoHandler, name, initialize, &_MissingInfoHandler_ClassInfo_, clinit$MissingInfoHandler, allocate$MissingInfoHandler);
	return class$;
}

$Class* MissingInfoHandler::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com