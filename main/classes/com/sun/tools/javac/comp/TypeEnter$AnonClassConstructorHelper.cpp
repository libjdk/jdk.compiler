#include <com/sun/tools/javac/comp/TypeEnter$AnonClassConstructorHelper.h>

#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$JCNoType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/TypeEnter$BasicConstructorHelper.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef NONE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCNoType = ::com::sun::tools::javac::code::Type$JCNoType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Types = ::com::sun::tools::javac::code::Types;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$BasicConstructorHelper = ::com::sun::tools::javac::comp::TypeEnter$BasicConstructorHelper;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0 : public $Function {
	$class(TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* vd) override {
		 return $of(TypeEnter$AnonClassConstructorHelper::lambda$superArgs$0($cast($JCTree$JCVariableDecl, vd)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0::*)()>(&TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0::class$ = nullptr;

$FieldInfo _TypeEnter$AnonClassConstructorHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$AnonClassConstructorHelper, this$0)},
	{"constr", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, 0, $field(TypeEnter$AnonClassConstructorHelper, constr)},
	{"encl", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(TypeEnter$AnonClassConstructorHelper, encl)},
	{"based", "Z", nullptr, 0, $field(TypeEnter$AnonClassConstructorHelper, based)},
	{}
};

$MethodInfo _TypeEnter$AnonClassConstructorHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/code/Symbol$MethodSymbol;Lcom/sun/tools/javac/tree/JCTree$JCExpression;)V", nullptr, 0, $method(static_cast<void(TypeEnter$AnonClassConstructorHelper::*)($TypeEnter*,$Symbol$TypeSymbol*,$Symbol$MethodSymbol*,$JCTree$JCExpression*)>(&TypeEnter$AnonClassConstructorHelper::init$))},
	{"constructorSymbol", "()Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{"constructorType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"enclosingType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"lambda$superArgs$0", "(Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;)Lcom/sun/tools/javac/util/Name;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Name*(*)($JCTree$JCVariableDecl*)>(&TypeEnter$AnonClassConstructorHelper::lambda$superArgs$0))},
	{"superArgs", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Name;>;", $PUBLIC},
	{}
};

$InnerClassInfo _TypeEnter$AnonClassConstructorHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$AnonClassConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "AnonClassConstructorHelper", 0},
	{"com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "BasicConstructorHelper", 0},
	{}
};

$ClassInfo _TypeEnter$AnonClassConstructorHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$AnonClassConstructorHelper",
	"com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper",
	nullptr,
	_TypeEnter$AnonClassConstructorHelper_FieldInfo_,
	_TypeEnter$AnonClassConstructorHelper_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$AnonClassConstructorHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$AnonClassConstructorHelper($Class* clazz) {
	return $of($alloc(TypeEnter$AnonClassConstructorHelper));
}

void TypeEnter$AnonClassConstructorHelper::init$($TypeEnter* this$0, $Symbol$TypeSymbol* owner, $Symbol$MethodSymbol* constr, $JCTree$JCExpression* encl) {
	$set(this, this$0, this$0);
	$TypeEnter$BasicConstructorHelper::init$(this$0, owner);
	this->based = false;
	$set(this, constr, constr);
	$init($Type);
	$set(this, encl, encl != nullptr ? $nc(encl)->type : static_cast<$Type*>($Type::noType));
}

$Type* TypeEnter$AnonClassConstructorHelper::constructorType() {
	$useLocalCurrentObjectStackCache();
	if (this->$TypeEnter$BasicConstructorHelper::constructorType$ == nullptr) {
		$var($Type, ctype, $nc(this->this$0->types)->memberType($nc(this->owner$)->type, this->constr));
		$init($TypeTag);
		if (!$nc($(enclosingType()))->hasTag($TypeTag::NONE)) {
			$assign(ctype, $nc(this->this$0->types)->createMethodTypeWithParameters(ctype, $($nc($($nc(ctype)->getParameterTypes()))->prepend($(enclosingType())))));
			this->based = true;
		}
		$set(this, constructorType$, ctype);
	}
	return this->$TypeEnter$BasicConstructorHelper::constructorType$;
}

$Symbol$MethodSymbol* TypeEnter$AnonClassConstructorHelper::constructorSymbol() {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, csym, $TypeEnter$BasicConstructorHelper::constructorSymbol());
	$nc(csym)->flags_field |= 0x20000000 | ((int64_t)($nc(this->constr)->flags() & (uint64_t)(int64_t)0x0000000400000000));
	csym->flags_field |= this->based ? (int64_t)0x0200000000000000 : (int64_t)0;
	$var($ListBuffer, params, $new($ListBuffer));
	$var($List, argtypes, $nc($(constructorType()))->getParameterTypes());
	$init($TypeTag);
	if (!$nc($(enclosingType()))->hasTag($TypeTag::NONE)) {
		$assign(argtypes, $nc(argtypes)->tail);
		$var($Name, var$0, $nc(this->this$0->make)->paramName(0));
		$assign(params, params->prepend($$new($Symbol$VarSymbol, 0x0000000200000000, var$0, $(enclosingType()), csym)));
	}
	if ($nc(this->constr)->params$ != nullptr) {
		{
			$var($Iterator, i$, $nc($nc(this->constr)->params$)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol$VarSymbol, p, $cast($Symbol$VarSymbol, i$->next()));
				{
					params->add($$new($Symbol$VarSymbol, (int64_t)0x0000000200000000 | $nc(p)->flags(), p->name, $cast($Type, $nc(argtypes)->head), csym));
					$assign(argtypes, $nc(argtypes)->tail);
				}
			}
		}
	}
	$set(csym, params$, params->toList());
	return csym;
}

$Type* TypeEnter$AnonClassConstructorHelper::enclosingType() {
	return this->encl;
}

$List* TypeEnter$AnonClassConstructorHelper::superArgs() {
	$useLocalCurrentObjectStackCache();
	$var($List, var$0, $nc($(constructorType()))->getParameterTypes());
	$var($List, params, $nc(this->this$0->make)->Params(var$0, $(constructorSymbol())));
	$init($TypeTag);
	if (!$nc($(enclosingType()))->hasTag($TypeTag::NONE)) {
		$assign(params, $nc(params)->tail);
	}
	return $nc(params)->map(static_cast<$Function*>($$new(TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0)));
}

$Name* TypeEnter$AnonClassConstructorHelper::lambda$superArgs$0($JCTree$JCVariableDecl* vd) {
	$init(TypeEnter$AnonClassConstructorHelper);
	return $nc(vd)->name;
}

TypeEnter$AnonClassConstructorHelper::TypeEnter$AnonClassConstructorHelper() {
}

$Class* TypeEnter$AnonClassConstructorHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0::classInfo$.name)) {
			return TypeEnter$AnonClassConstructorHelper$$Lambda$lambda$superArgs$0::load$(name, initialize);
		}
	}
	$loadClass(TypeEnter$AnonClassConstructorHelper, name, initialize, &_TypeEnter$AnonClassConstructorHelper_ClassInfo_, allocate$TypeEnter$AnonClassConstructorHelper);
	return class$;
}

$Class* TypeEnter$AnonClassConstructorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com