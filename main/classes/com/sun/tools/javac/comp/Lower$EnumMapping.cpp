#include <com/sun/tools/javac/comp/Lower$EnumMapping.h>

#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/tree/JCTree$JCArrayAccess.h>
#include <com/sun/tools/javac/tree/JCTree$JCAssign.h>
#include <com/sun/tools/javac/tree/JCTree$JCBlock.h>
#include <com/sun/tools/javac/tree/JCTree$JCCatch.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpressionStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCLiteral.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodInvocation.h>
#include <com/sun/tools/javac/tree/JCTree$JCNewArray.h>
#include <com/sun/tools/javac/tree/JCTree$JCPolyExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCStatement.h>
#include <com/sun/tools/javac/tree/JCTree$JCTry.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $JCTree$JCArrayAccess = ::com::sun::tools::javac::tree::JCTree$JCArrayAccess;
using $JCTree$JCAssign = ::com::sun::tools::javac::tree::JCTree$JCAssign;
using $JCTree$JCBlock = ::com::sun::tools::javac::tree::JCTree$JCBlock;
using $JCTree$JCCatch = ::com::sun::tools::javac::tree::JCTree$JCCatch;
using $JCTree$JCClassDecl = ::com::sun::tools::javac::tree::JCTree$JCClassDecl;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCExpressionStatement = ::com::sun::tools::javac::tree::JCTree$JCExpressionStatement;
using $JCTree$JCLiteral = ::com::sun::tools::javac::tree::JCTree$JCLiteral;
using $JCTree$JCMethodInvocation = ::com::sun::tools::javac::tree::JCTree$JCMethodInvocation;
using $JCTree$JCNewArray = ::com::sun::tools::javac::tree::JCTree$JCNewArray;
using $JCTree$JCPolyExpression = ::com::sun::tools::javac::tree::JCTree$JCPolyExpression;
using $JCTree$JCStatement = ::com::sun::tools::javac::tree::JCTree$JCStatement;
using $JCTree$JCTry = ::com::sun::tools::javac::tree::JCTree$JCTry;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$FieldInfo _Lower$EnumMapping_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$EnumMapping, this$0)},
	{"pos", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;", nullptr, 0, $field(Lower$EnumMapping, pos)},
	{"next", "I", nullptr, 0, $field(Lower$EnumMapping, next)},
	{"forEnum", "Lcom/sun/tools/javac/code/Symbol$TypeSymbol;", nullptr, $FINAL, $field(Lower$EnumMapping, forEnum)},
	{"mapVar", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $FINAL, $field(Lower$EnumMapping, mapVar)},
	{"values", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$VarSymbol;Ljava/lang/Integer;>;", $FINAL, $field(Lower$EnumMapping, values)},
	{}
};

$MethodInfo _Lower$EnumMapping_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Lower;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)V", nullptr, 0, $method(static_cast<void(Lower$EnumMapping::*)($Lower*,$JCDiagnostic$DiagnosticPosition*,$Symbol$TypeSymbol*)>(&Lower$EnumMapping::init$))},
	{"forConstant", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;)Lcom/sun/tools/javac/tree/JCTree$JCLiteral;", nullptr, 0},
	{"translate", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _Lower$EnumMapping_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Lower$EnumMapping", "com.sun.tools.javac.comp.Lower", "EnumMapping", 0},
	{}
};

$ClassInfo _Lower$EnumMapping_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Lower$EnumMapping",
	"java.lang.Object",
	nullptr,
	_Lower$EnumMapping_FieldInfo_,
	_Lower$EnumMapping_MethodInfo_,
	nullptr,
	nullptr,
	_Lower$EnumMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Lower"
};

$Object* allocate$Lower$EnumMapping($Class* clazz) {
	return $of($alloc(Lower$EnumMapping));
}

void Lower$EnumMapping::init$($Lower* this$0, $JCDiagnostic$DiagnosticPosition* pos, $Symbol$TypeSymbol* forEnum) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, pos, nullptr);
	this->next = 1;
	$set(this, forEnum, forEnum);
	$set(this, values, $new($LinkedHashMap));
	$set(this, pos, pos);
	$var($String, var$1, $$str({$$str(this$0->target->syntheticNameChar()), "SwitchMap"_s}));
	$var($String, var$0, $$concat(var$1, $$str(this$0->target->syntheticNameChar())));
	$var($Name, varName, $nc(this$0->names)->fromString($$concat(var$0, $($($nc($($nc($($nc(this$0->names)->fromUtf($($ClassWriter::externalize($($nc($nc($nc(forEnum)->type)->tsym)->flatName()))))))->toString()))->replace(u'/', u'.'))->replace(u'.', this$0->target->syntheticNameChar())))));
	$var($Symbol$ClassSymbol, outerCacheClass, this$0->outerCacheClass());
	$set(this, mapVar, $new($Symbol$VarSymbol, (8 | 4096) | 16, varName, $$new($Type$ArrayType, $nc(this$0->syms)->intType, $nc(this$0->syms)->arrayClass), outerCacheClass));
	this$0->enterSynthetic(pos, this->mapVar, $($nc(outerCacheClass)->members()));
}

$JCTree$JCLiteral* Lower$EnumMapping::forConstant($Symbol$VarSymbol* v) {
	$var($Integer, result, $cast($Integer, $nc(this->values)->get(v)));
	if (result == nullptr) {
		$nc(this->values)->put(v, $assign(result, $Integer::valueOf(this->next++)));
	}
	return $nc(this->this$0->make)->Literal(result);
}

void Lower$EnumMapping::translate() {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->make)->at($nc(this->pos)->getStartPosition());
	$var($JCTree$JCClassDecl, owner, this->this$0->classDef($cast($Symbol$ClassSymbol, $nc(this->mapVar)->owner)));
	$var($Symbol$MethodSymbol, valuesMethod, this->this$0->lookupMethod(this->pos, $nc(this->this$0->names)->values, $nc(this->forEnum)->type, $($List::nil())));
	$var($JCTree$JCExpression, size, $nc(this->this$0->make)->Select($(static_cast<$JCTree$JCExpression*>($nc(this->this$0->make)->App($($nc(this->this$0->make)->QualIdent(valuesMethod))))), static_cast<$Symbol*>($nc(this->this$0->syms)->lengthVar)));
	$var($JCTree$JCExpression, var$0, $nc(this->this$0->make)->Type($nc(this->this$0->syms)->intType));
	$var($JCTree$JCExpression, mapVarInit, $nc($($nc(this->this$0->make)->NewArray(var$0, $($List::of(size)), nullptr)))->setType($$new($Type$ArrayType, $nc(this->this$0->syms)->intType, $nc(this->this$0->syms)->arrayClass)));
	$var($ListBuffer, stmts, $new($ListBuffer));
	$var($Symbol, ordinalMethod, this->this$0->lookupMethod(this->pos, $nc(this->this$0->names)->ordinal, $nc(this->forEnum)->type, $($List::nil())));
	$var($JCTree$JCVariableDecl, var$1, $nc(this->this$0->make)->VarDef($$new($Symbol$VarSymbol, 0x0000000200000000, $nc(this->this$0->names)->ex, $nc(this->this$0->syms)->noSuchFieldErrorType, $nc(this->this$0->syms)->noSymbol), nullptr));
	$var($List, catcher, $nc($($List::nil()))->prepend($($nc(this->this$0->make)->Catch(var$1, $($nc(this->this$0->make)->Block(0, $($List::nil())))))));
	{
		$var($Iterator, i$, $nc($($nc(this->values)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Symbol$VarSymbol, enumerator, $cast($Symbol$VarSymbol, $nc(e)->getKey()));
				$var($Integer, mappedValue, $cast($Integer, e->getValue()));
				$var($JCTree$JCExpression, var$2, static_cast<$JCTree$JCExpression*>($nc(this->this$0->make)->Indexed(static_cast<$Symbol*>(this->mapVar), $(static_cast<$JCTree$JCExpression*>($nc(this->this$0->make)->App($($nc(this->this$0->make)->Select($($nc(this->this$0->make)->QualIdent(enumerator)), ordinalMethod))))))));
				$var($JCTree$JCExpression, assign, $nc($($nc(this->this$0->make)->Assign(var$2, $($nc(this->this$0->make)->Literal(mappedValue)))))->setType($nc(this->this$0->syms)->intType));
				$var($JCTree$JCStatement, exec, $nc(this->this$0->make)->Exec(assign));
				$var($JCTree$JCStatement, _try$, $nc(this->this$0->make)->Try($($nc(this->this$0->make)->Block(0, $($List::of(exec)))), catcher, nullptr));
				stmts->append(_try$);
			}
		}
	}
	$set($nc(owner), defs, $nc($($nc(owner->defs)->prepend($($nc(this->this$0->make)->Block(8, $(stmts->toList()))))))->prepend($($nc(this->this$0->make)->VarDef(this->mapVar, mapVarInit))));
}

Lower$EnumMapping::Lower$EnumMapping() {
}

$Class* Lower$EnumMapping::load$($String* name, bool initialize) {
	$loadClass(Lower$EnumMapping, name, initialize, &_Lower$EnumMapping_ClassInfo_, allocate$Lower$EnumMapping);
	return class$;
}

$Class* Lower$EnumMapping::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com