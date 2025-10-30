#include <com/sun/tools/javac/comp/TypeEnter$RecordConstructorHelper.h>

#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCVoidType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/TypeEnter$BasicConstructorHelper.h>
#include <com/sun/tools/javac/comp/TypeEnter.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCModifiers.h>
#include <com/sun/tools/javac/tree/JCTree$JCVariableDecl.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/TreeCopier.h>
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
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef COMPACT_RECORD_CONSTRUCTOR
#undef VARARGS

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$MethodSymbol = ::com::sun::tools::javac::code::Symbol$MethodSymbol;
using $Symbol$RecordComponent = ::com::sun::tools::javac::code::Symbol$RecordComponent;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCVoidType = ::com::sun::tools::javac::code::Type$JCVoidType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $TypeEnter = ::com::sun::tools::javac::comp::TypeEnter;
using $TypeEnter$BasicConstructorHelper = ::com::sun::tools::javac::comp::TypeEnter$BasicConstructorHelper;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCMethodDecl = ::com::sun::tools::javac::tree::JCTree$JCMethodDecl;
using $JCTree$JCModifiers = ::com::sun::tools::javac::tree::JCTree$JCModifiers;
using $JCTree$JCVariableDecl = ::com::sun::tools::javac::tree::JCTree$JCVariableDecl;
using $TreeCopier = ::com::sun::tools::javac::tree::TreeCopier;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0 : public $Predicate {
	$class(TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* rc) override {
		 return TypeEnter$RecordConstructorHelper::lambda$new$0($cast($Symbol$RecordComponent, rc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0::*)()>(&TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _TypeEnter$RecordConstructorHelper_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/comp/TypeEnter;", nullptr, $FINAL | $SYNTHETIC, $field(TypeEnter$RecordConstructorHelper, this$0)},
	{"lastIsVarargs", "Z", nullptr, 0, $field(TypeEnter$RecordConstructorHelper, lastIsVarargs)},
	{"recordFieldDecls", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;", 0, $field(TypeEnter$RecordConstructorHelper, recordFieldDecls)},
	{}
};

$MethodInfo _TypeEnter$RecordConstructorHelper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/TypeEnter;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCVariableDecl;>;)V", 0, $method(static_cast<void(TypeEnter$RecordConstructorHelper::*)($TypeEnter*,$Symbol$ClassSymbol*,$List*)>(&TypeEnter$RecordConstructorHelper::init$))},
	{"constructorSymbol", "()Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC},
	{"constructorType", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{"finalAdjustment", "(Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;)Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC},
	{"lambda$new$0", "(Lcom/sun/tools/javac/code/Symbol$RecordComponent;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Symbol$RecordComponent*)>(&TypeEnter$RecordConstructorHelper::lambda$new$0))},
	{}
};

$InnerClassInfo _TypeEnter$RecordConstructorHelper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.TypeEnter$RecordConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "RecordConstructorHelper", 0},
	{"com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper", "com.sun.tools.javac.comp.TypeEnter", "BasicConstructorHelper", 0},
	{}
};

$ClassInfo _TypeEnter$RecordConstructorHelper_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.TypeEnter$RecordConstructorHelper",
	"com.sun.tools.javac.comp.TypeEnter$BasicConstructorHelper",
	nullptr,
	_TypeEnter$RecordConstructorHelper_FieldInfo_,
	_TypeEnter$RecordConstructorHelper_MethodInfo_,
	nullptr,
	nullptr,
	_TypeEnter$RecordConstructorHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.TypeEnter"
};

$Object* allocate$TypeEnter$RecordConstructorHelper($Class* clazz) {
	return $of($alloc(TypeEnter$RecordConstructorHelper));
}

void TypeEnter$RecordConstructorHelper::init$($TypeEnter* this$0, $Symbol$ClassSymbol* owner, $List* recordFieldDecls) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$TypeEnter$BasicConstructorHelper::init$(this$0, owner);
	$set(this, recordFieldDecls, recordFieldDecls);
	this->lastIsVarargs = $nc($($nc($($nc(owner)->getRecordComponents()))->stream()))->anyMatch(static_cast<$Predicate*>($$new(TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0)));
}

$Type* TypeEnter$RecordConstructorHelper::constructorType() {
	$useLocalCurrentObjectStackCache();
	if (this->$TypeEnter$BasicConstructorHelper::constructorType$ == nullptr) {
		$var($ListBuffer, argtypes, $new($ListBuffer));
		$var($JCTree$JCVariableDecl, lastField, $cast($JCTree$JCVariableDecl, $nc(this->recordFieldDecls)->last()));
		{
			$var($Iterator, i$, $nc(this->recordFieldDecls)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JCTree$JCVariableDecl, field, $cast($JCTree$JCVariableDecl, i$->next()));
				{
					argtypes->add(field == lastField && this->lastIsVarargs ? $($nc(this->this$0->types)->elemtype($nc($nc(field)->sym)->type)) : $nc($nc(field)->sym)->type);
				}
			}
		}
		$var($List, var$0, argtypes->toList());
		$var($Type, var$1, static_cast<$Type*>($nc(this->this$0->syms)->voidType));
		$set(this, constructorType$, $new($Type$MethodType, var$0, var$1, $($List::nil()), $nc(this->this$0->syms)->methodClass));
	}
	return this->$TypeEnter$BasicConstructorHelper::constructorType$;
}

$Symbol$MethodSymbol* TypeEnter$RecordConstructorHelper::constructorSymbol() {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$MethodSymbol, csym, $TypeEnter$BasicConstructorHelper::constructorSymbol());
	$nc(csym)->flags_field |= $Flags::COMPACT_RECORD_CONSTRUCTOR | (int64_t)0x0000001000000000;
	$var($ListBuffer, params, $new($ListBuffer));
	$var($JCTree$JCVariableDecl, lastField, $cast($JCTree$JCVariableDecl, $nc(this->recordFieldDecls)->last()));
	{
		$var($Iterator, i$, $nc(this->recordFieldDecls)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCVariableDecl, field, $cast($JCTree$JCVariableDecl, i$->next()));
			{
				params->add($$new($Symbol$VarSymbol, ((0x01000000 | (int64_t)0x0000000200000000) | (int64_t)0x2000000000000000) | (field == lastField && this->lastIsVarargs ? $Flags::VARARGS : (int64_t)0), $nc(field)->name, $nc(field->sym)->type, csym));
			}
		}
	}
	$set(csym, params$, params->toList());
	csym->flags_field |= 0x2000000000000000;
	return csym;
}

$JCTree$JCMethodDecl* TypeEnter$RecordConstructorHelper::finalAdjustment($JCTree$JCMethodDecl* md) {
	$useLocalCurrentObjectStackCache();
	$var($List, tmpRecordFieldDecls, this->recordFieldDecls);
	{
		$var($Iterator, i$, $nc($nc(md)->params)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JCTree$JCVariableDecl, arg, $cast($JCTree$JCVariableDecl, i$->next()));
			{
				$var($Symbol$RecordComponent, rc, $nc(($cast($Symbol$ClassSymbol, this->owner$)))->getRecordComponent($nc(arg)->sym));
				$var($TreeCopier, tc, $new($TreeCopier, $($nc(this->this$0->make)->at($nc(arg)->pos$))));
				$set($nc($nc(arg)->mods), annotations, $nc($($nc(rc)->getOriginalAnnos()))->isEmpty() ? $List::nil() : tc->copy($($nc(rc)->getOriginalAnnos())));
				$set(arg, vartype, $cast($JCTree$JCExpression, tc->copy(static_cast<$JCTree*>($nc(($cast($JCTree$JCVariableDecl, $nc(tmpRecordFieldDecls)->head)))->vartype))));
				$assign(tmpRecordFieldDecls, $nc(tmpRecordFieldDecls)->tail);
			}
		}
	}
	return md;
}

bool TypeEnter$RecordConstructorHelper::lambda$new$0($Symbol$RecordComponent* rc) {
	$init(TypeEnter$RecordConstructorHelper);
	return $nc(rc)->isVarargs();
}

TypeEnter$RecordConstructorHelper::TypeEnter$RecordConstructorHelper() {
}

$Class* TypeEnter$RecordConstructorHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0::classInfo$.name)) {
			return TypeEnter$RecordConstructorHelper$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(TypeEnter$RecordConstructorHelper, name, initialize, &_TypeEnter$RecordConstructorHelper_ClassInfo_, allocate$TypeEnter$RecordConstructorHelper);
	return class$;
}

$Class* TypeEnter$RecordConstructorHelper::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com