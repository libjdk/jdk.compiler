#include <com/sun/tools/javac/jvm/StringConcat$IndyConstants.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$DynamicMethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodHandleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/jvm/Gen.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/StringConcat$Indy.h>
#include <com/sun/tools/javac/jvm/StringConcat.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$DynamicMethodSymbol = ::com::sun::tools::javac::code::Symbol$DynamicMethodSymbol;
using $Symbol$MethodHandleSymbol = ::com::sun::tools::javac::code::Symbol$MethodHandleSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Resolve = ::com::sun::tools::javac::comp::Resolve;
using $Gen = ::com::sun::tools::javac::jvm::Gen;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $StringConcat = ::com::sun::tools::javac::jvm::StringConcat;
using $StringConcat$Indy = ::com::sun::tools::javac::jvm::StringConcat$Indy;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic$DiagnosticPosition = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$MethodInfo _StringConcat$IndyConstants_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(static_cast<void(StringConcat$IndyConstants::*)($Context*)>(&StringConcat$IndyConstants::init$))},
	{"doCall", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Ljava/lang/String;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)V", $PRIVATE, $method(static_cast<void(StringConcat$IndyConstants::*)($Type*,$JCDiagnostic$DiagnosticPosition*,$String*,$List*,$List*)>(&StringConcat$IndyConstants::doCall))},
	{"emit", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List;ZLcom/sun/tools/javac/code/Type;)V", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;ZLcom/sun/tools/javac/code/Type;)V", $PROTECTED},
	{}
};

$InnerClassInfo _StringConcat$IndyConstants_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.StringConcat$IndyConstants", "com.sun.tools.javac.jvm.StringConcat", "IndyConstants", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.tools.javac.jvm.StringConcat$Indy", "com.sun.tools.javac.jvm.StringConcat", "Indy", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StringConcat$IndyConstants_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.jvm.StringConcat$IndyConstants",
	"com.sun.tools.javac.jvm.StringConcat$Indy",
	nullptr,
	nullptr,
	_StringConcat$IndyConstants_MethodInfo_,
	nullptr,
	nullptr,
	_StringConcat$IndyConstants_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.StringConcat"
};

$Object* allocate$StringConcat$IndyConstants($Class* clazz) {
	return $of($alloc(StringConcat$IndyConstants));
}

void StringConcat$IndyConstants::init$($Context* context) {
	$StringConcat$Indy::init$(context);
}

void StringConcat$IndyConstants::emit($JCDiagnostic$DiagnosticPosition* pos, $List* args, bool generateFirstArg, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$var($List, split, this->split(args));
	bool first = true;
	{
		$var($Iterator, i$, $nc(split)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($List, t, $cast($List, i$->next()));
			{
				$Assert::check(!$nc(t)->isEmpty(), "Arguments list is empty"_s);
				$var($StringBuilder, recipe, $new($StringBuilder, $nc(t)->size()));
				$var($ListBuffer, dynamicArgs, $new($ListBuffer));
				$var($ListBuffer, staticArgs, $new($ListBuffer));
				{
					$var($Iterator, i$, $nc(t)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCTree, arg, $cast($JCTree, i$->next()));
						{
							$var($Object, constVal, $nc($nc(arg)->type)->constValue());
							if (""_s->equals(constVal)) {
								continue;
							}
							if (arg->type == $nc(this->syms)->botType) {
								recipe->append(($String*)nullptr);
							} else if (constVal != nullptr) {
								$var($String, a, $nc(arg->type)->stringValue());
								bool var$0 = $nc(a)->indexOf((int32_t)(char16_t)0x2) != -1;
								if (var$0 || $nc(a)->indexOf((int32_t)(char16_t)0x1) != -1) {
									recipe->append((char16_t)0x2);
									staticArgs->add($($PoolConstant$LoadableConstant::String(a)));
								} else {
									recipe->append(a);
								}
							} else {
								recipe->append((char16_t)0x1);
								dynamicArgs->add($(sharpestAccessible(arg->type)));
								if (!first || generateFirstArg) {
									$nc($($nc(this->gen)->genExpr(arg, arg->type)))->load();
								}
								first = false;
							}
						}
					}
				}
				$var($Type, var$1, type);
				$var($JCDiagnostic$DiagnosticPosition, var$2, pos);
				$var($String, var$3, recipe->toString());
				$var($List, var$4, staticArgs->toList());
				doCall(var$1, var$2, var$3, var$4, $(dynamicArgs->toList()));
			}
		}
	}
	if (split->size() > 1) {
		$var($ListBuffer, argTypes, $new($ListBuffer));
		$var($StringBuilder, recipe, $new($StringBuilder));
		for (int32_t c = 0; c < split->size(); ++c) {
			argTypes->append($nc(this->syms)->stringType);
			recipe->append((char16_t)0x1);
		}
		$var($Type, var$5, type);
		$var($JCDiagnostic$DiagnosticPosition, var$6, pos);
		$var($String, var$7, recipe->toString());
		$var($List, var$8, $List::nil());
		doCall(var$5, var$6, var$7, var$8, $(argTypes->toList()));
	}
}

void StringConcat$IndyConstants::doCall($Type* type, $JCDiagnostic$DiagnosticPosition* pos, $String* recipe, $List* staticArgs, $List* dynamicArgTypes) {
	$useLocalCurrentObjectStackCache();
	$var($Type$MethodType, indyType, $new($Type$MethodType, dynamicArgTypes, type, $($List::nil()), $nc(this->syms)->methodClass));
	int32_t prevPos = $nc(this->make)->pos;
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->make)->at(pos);
			$var($ListBuffer, constTypes, $new($ListBuffer));
			$var($ListBuffer, constants, $new($ListBuffer));
			{
				$var($Iterator, i$, $nc(staticArgs)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($PoolConstant$LoadableConstant, t, $cast($PoolConstant$LoadableConstant, i$->next()));
					{
						constants->add(t);
						constTypes->add($nc(this->syms)->stringType);
					}
				}
			}
			$var($List, bsm_staticArgs, $nc($($nc($($List::of($nc(this->syms)->methodHandleLookupType, $nc(this->syms)->stringType, $nc(this->syms)->methodTypeType)))->append($nc(this->syms)->stringType)))->appendList(constTypes));
			$var($Symbol, bsm, $nc(this->rs)->resolveInternalMethod(pos, $($nc(this->gen)->getAttrEnv()), $nc(this->syms)->stringConcatFactory, $nc(this->names)->makeConcatWithConstants, bsm_staticArgs, nullptr));
			$var($Name, var$1, $nc(this->names)->makeConcatWithConstants);
			$var($Symbol, var$2, static_cast<$Symbol*>($nc(this->syms)->noSymbol));
			$var($Symbol$MethodHandleSymbol, var$3, $nc(($cast($Symbol$MethodSymbol, bsm)))->asHandle());
			$var($Type, var$4, static_cast<$Type*>(indyType));
			$var($Symbol$DynamicMethodSymbol, dynSym, $new($Symbol$DynamicMethodSymbol, var$1, var$2, var$3, var$4, $fcast($PoolConstant$LoadableConstantArray, $($nc($($nc($($List::of($($PoolConstant$LoadableConstant::String(recipe)))))->appendList(constants)))->toArray($$new($PoolConstant$LoadableConstantArray, constants->size()))))));
			$var($Items$Item, item, $nc($($nc(this->gen)->getItems()))->makeDynamicItem(dynSym));
			$nc(item)->invoke();
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$nc(this->make)->at(prevPos);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

StringConcat$IndyConstants::StringConcat$IndyConstants() {
}

$Class* StringConcat$IndyConstants::load$($String* name, bool initialize) {
	$loadClass(StringConcat$IndyConstants, name, initialize, &_StringConcat$IndyConstants_ClassInfo_, allocate$StringConcat$IndyConstants);
	return class$;
}

$Class* StringConcat$IndyConstants::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com