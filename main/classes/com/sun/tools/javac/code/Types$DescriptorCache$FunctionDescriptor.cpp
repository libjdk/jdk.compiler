#include <com/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$IntersectionClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache.h>
#include <com/sun/tools/javac/code/Types$FunctionDescriptorLookupError.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$IntersectionClassType = ::com::sun::tools::javac::code::Type$IntersectionClassType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DescriptorCache = ::com::sun::tools::javac::code::Types$DescriptorCache;
using $Types$FunctionDescriptorLookupError = ::com::sun::tools::javac::code::Types$FunctionDescriptorLookupError;
using $Check = ::com::sun::tools::javac::comp::Check;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$DescriptorCache$FunctionDescriptor_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$DescriptorCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorCache$FunctionDescriptor, this$1)},
	{"descSym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Types$DescriptorCache$FunctionDescriptor, descSym)},
	{}
};

$MethodInfo _Types$DescriptorCache$FunctionDescriptor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Types$DescriptorCache$FunctionDescriptor::*)($Types$DescriptorCache*,$Symbol*)>(&Types$DescriptorCache$FunctionDescriptor::init$))},
	{"getSymbol", "()Lcom/sun/tools/javac/code/Symbol;", nullptr, $PUBLIC},
	{"getType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Types$DescriptorCache$FunctionDescriptor_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$DescriptorCache", "com.sun.tools.javac.code.Types", "DescriptorCache", 0},
	{"com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor", "com.sun.tools.javac.code.Types$DescriptorCache", "FunctionDescriptor", 0},
	{}
};

$ClassInfo _Types$DescriptorCache$FunctionDescriptor_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor",
	"java.lang.Object",
	nullptr,
	_Types$DescriptorCache$FunctionDescriptor_FieldInfo_,
	_Types$DescriptorCache$FunctionDescriptor_MethodInfo_,
	nullptr,
	nullptr,
	_Types$DescriptorCache$FunctionDescriptor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$DescriptorCache$FunctionDescriptor($Class* clazz) {
	return $of($alloc(Types$DescriptorCache$FunctionDescriptor));
}

void Types$DescriptorCache$FunctionDescriptor::init$($Types$DescriptorCache* this$1, $Symbol* descSym) {
	$set(this, this$1, this$1);
	$set(this, descSym, descSym);
}

$Symbol* Types$DescriptorCache$FunctionDescriptor::getSymbol() {
	return this->descSym;
}

$Type* Types$DescriptorCache$FunctionDescriptor::getType($Type* site$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Type, site, site$renamed);
	$assign(site, $nc(this->this$1->this$0)->removeWildcards(site));
	if ($nc(site)->isIntersection()) {
		$var($Type$IntersectionClassType, ict, $cast($Type$IntersectionClassType, site));
		{
			$var($Iterator, i$, $nc($(ict->getExplicitComponents()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, component, $cast($Type, i$->next()));
				{
					if (!$nc($nc(this->this$1->this$0)->chk)->checkValidGenericType(component)) {
						$throw($(this->this$1->failure($($nc($nc(this->this$1->this$0)->diags)->fragment($($CompilerProperties$Fragments::NoSuitableFunctionalIntfInst(site)))))));
					}
				}
			}
		}
	} else if (!$nc($nc(this->this$1->this$0)->chk)->checkValidGenericType(site)) {
		$throw($(this->this$1->failure($($nc($nc(this->this$1->this$0)->diags)->fragment($($CompilerProperties$Fragments::NoSuitableFunctionalIntfInst(site)))))));
	}
	return $nc(this->this$1->this$0)->memberType(site, this->descSym);
}

Types$DescriptorCache$FunctionDescriptor::Types$DescriptorCache$FunctionDescriptor() {
}

$Class* Types$DescriptorCache$FunctionDescriptor::load$($String* name, bool initialize) {
	$loadClass(Types$DescriptorCache$FunctionDescriptor, name, initialize, &_Types$DescriptorCache$FunctionDescriptor_ClassInfo_, allocate$Types$DescriptorCache$FunctionDescriptor);
	return class$;
}

$Class* Types$DescriptorCache$FunctionDescriptor::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com