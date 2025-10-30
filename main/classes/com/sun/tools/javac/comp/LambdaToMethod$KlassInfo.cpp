#include <com/sun/tools/javac/comp/LambdaToMethod$KlassInfo.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/LambdaToMethod.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $LambdaToMethod = ::com::sun::tools::javac::comp::LambdaToMethod;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _LambdaToMethod$KlassInfo_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/LambdaToMethod;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaToMethod$KlassInfo, this$0)},
	{"appendedMethodList", "Lcom/sun/tools/javac/util/ListBuffer;", "Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree;>;", $PRIVATE, $field(LambdaToMethod$KlassInfo, appendedMethodList)},
	{"dedupedLambdas", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/comp/LambdaToMethod$DedupedLambda;Lcom/sun/tools/javac/comp/LambdaToMethod$DedupedLambda;>;", $PRIVATE, $field(LambdaToMethod$KlassInfo, dedupedLambdas)},
	{"dynMethSyms", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Lcom/sun/tools/javac/code/Symbol$DynamicMethodSymbol;>;", $PRIVATE, $field(LambdaToMethod$KlassInfo, dynMethSyms)},
	{"deserializeCases", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/javac/util/ListBuffer<Lcom/sun/tools/javac/tree/JCTree$JCStatement;>;>;", $PRIVATE | $FINAL, $field(LambdaToMethod$KlassInfo, deserializeCases)},
	{"deserMethodSym", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod$KlassInfo, deserMethodSym)},
	{"deserParamSym", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod$KlassInfo, deserParamSym)},
	{"clazz", "Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;", nullptr, $PRIVATE | $FINAL, $field(LambdaToMethod$KlassInfo, clazz)},
	{}
};

$MethodInfo _LambdaToMethod$KlassInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/LambdaToMethod;Lcom/sun/tools/javac/tree/JCTree$JCClassDecl;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaToMethod$KlassInfo::*)($LambdaToMethod*,$JCTree$JCClassDecl*)>(&LambdaToMethod$KlassInfo::init$))},
	{"addMethod", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaToMethod$KlassInfo::*)($JCTree*)>(&LambdaToMethod$KlassInfo::addMethod))},
	{}
};

$InnerClassInfo _LambdaToMethod$KlassInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.LambdaToMethod$KlassInfo", "com.sun.tools.javac.comp.LambdaToMethod", "KlassInfo", $PRIVATE},
	{}
};

$ClassInfo _LambdaToMethod$KlassInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.LambdaToMethod$KlassInfo",
	"java.lang.Object",
	nullptr,
	_LambdaToMethod$KlassInfo_FieldInfo_,
	_LambdaToMethod$KlassInfo_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaToMethod$KlassInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.LambdaToMethod"
};

$Object* allocate$LambdaToMethod$KlassInfo($Class* clazz) {
	return $of($alloc(LambdaToMethod$KlassInfo));
}

void LambdaToMethod$KlassInfo::init$($LambdaToMethod* this$0, $JCTree$JCClassDecl* clazz) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, dynMethSyms, $new($HashMap));
	$set(this, clazz, clazz);
	$set(this, appendedMethodList, $new($ListBuffer));
	$set(this, dedupedLambdas, $new($HashMap));
	$set(this, deserializeCases, $new($HashMap));
	$var($List, var$0, $List::of($nc(this$0->syms)->serializedLambdaType));
	$var($Type, var$1, $nc(this$0->syms)->objectType);
	$var($Type$MethodType, type, $new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this$0->syms)->methodClass));
	$set(this, deserMethodSym, this$0->makePrivateSyntheticMethod(8, $nc(this$0->names)->deserializeLambda, type, $nc(clazz)->sym));
	$set(this, deserParamSym, $new($Symbol$VarSymbol, 16, $($nc(this$0->names)->fromString("lambda"_s)), $nc(this$0->syms)->serializedLambdaType, this->deserMethodSym));
}

void LambdaToMethod$KlassInfo::addMethod($JCTree* decl) {
	$set(this, appendedMethodList, $nc(this->appendedMethodList)->prepend(decl));
}

LambdaToMethod$KlassInfo::LambdaToMethod$KlassInfo() {
}

$Class* LambdaToMethod$KlassInfo::load$($String* name, bool initialize) {
	$loadClass(LambdaToMethod$KlassInfo, name, initialize, &_LambdaToMethod$KlassInfo_ClassInfo_, allocate$LambdaToMethod$KlassInfo);
	return class$;
}

$Class* LambdaToMethod$KlassInfo::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com