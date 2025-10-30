#include <jdk/internal/shellsupport/doc/JavadocFormatter$2.h>

#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/source/doctree/StartElementTree.h>
#include <com/sun/source/util/DocTreeScanner.h>
#include <java/lang/Math.h>
#include <java/util/Map.h>
#include <javax/lang/model/element/Name.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$3.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter.h>
#include <jcpp.h>

#undef TABLE

using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $EndElementTree = ::com::sun::source::doctree::EndElementTree;
using $StartElementTree = ::com::sun::source::doctree::StartElementTree;
using $DocTreeScanner = ::com::sun::source::util::DocTreeScanner;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Map = ::java::util::Map;
using $Name = ::javax::lang::model::element::Name;
using $JavadocFormatter = ::jdk::internal::shellsupport::doc::JavadocFormatter;
using $JavadocFormatter$3 = ::jdk::internal::shellsupport::doc::JavadocFormatter$3;
using $JavadocFormatter$HtmlTag = ::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocFormatter$2_FieldInfo_[] = {
	{"val$result", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(JavadocFormatter$2, val$result)},
	{"currentTable", "Lcom/sun/source/doctree/StartElementTree;", nullptr, $PRIVATE, $field(JavadocFormatter$2, currentTable)},
	{"currentMaxColumns", "I", nullptr, $PRIVATE, $field(JavadocFormatter$2, currentMaxColumns)},
	{"currentRowColumns", "I", nullptr, $PRIVATE, $field(JavadocFormatter$2, currentRowColumns)},
	{}
};

$MethodInfo _JavadocFormatter$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, 0, $method(static_cast<void(JavadocFormatter$2::*)($Map*)>(&JavadocFormatter$2::init$))},
	{"closeTable", "()V", nullptr, $PRIVATE, $method(static_cast<void(JavadocFormatter$2::*)()>(&JavadocFormatter$2::closeTable))},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitEndElement", "(Lcom/sun/source/doctree/EndElementTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitEndElement", "(Lcom/sun/source/doctree/EndElementTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"visitStartElement", "(Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC},
	{"visitStartElement", "(Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _JavadocFormatter$2_EnclosingMethodInfo_ = {
	"jdk.internal.shellsupport.doc.JavadocFormatter",
	"countTableColumns",
	"(Lcom/sun/source/doctree/DocCommentTree;)Ljava/util/Map;"
};

$InnerClassInfo _JavadocFormatter$2_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocFormatter$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JavadocFormatter$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.shellsupport.doc.JavadocFormatter$2",
	"com.sun.source.util.DocTreeScanner",
	nullptr,
	_JavadocFormatter$2_FieldInfo_,
	_JavadocFormatter$2_MethodInfo_,
	"Lcom/sun/source/util/DocTreeScanner<Ljava/lang/Void;Ljava/lang/Void;>;",
	&_JavadocFormatter$2_EnclosingMethodInfo_,
	_JavadocFormatter$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocFormatter"
};

$Object* allocate$JavadocFormatter$2($Class* clazz) {
	return $of($alloc(JavadocFormatter$2));
}

void JavadocFormatter$2::init$($Map* val$result) {
	$set(this, val$result, val$result);
	$DocTreeScanner::init$();
}

$Void* JavadocFormatter$2::visitStartElement($StartElementTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	$init($JavadocFormatter$3);
	switch ($nc($JavadocFormatter$3::$SwitchMap$jdk$internal$shellsupport$doc$JavadocFormatter$HtmlTag)->get($nc(($($JavadocFormatter::getHtmlTag($($nc(node)->getName())))))->ordinal())) {
	case 16:
		{
			$set(this, currentTable, node);
			break;
		}
	case 17:
		{
			this->currentMaxColumns = $Math::max(this->currentMaxColumns, this->currentRowColumns);
			this->currentRowColumns = 0;
			break;
		}
	case 19:
		{}
	case 18:
		{
			++this->currentRowColumns;
			break;
		}
	}
	return $cast($Void, $DocTreeScanner::visitStartElement(node, p));
}

$Void* JavadocFormatter$2::visitEndElement($EndElementTree* node, $Void* p) {
	$init($JavadocFormatter$HtmlTag);
	if ($JavadocFormatter$HtmlTag::get($($nc(node)->getName())) == $JavadocFormatter$HtmlTag::TABLE) {
		closeTable();
	}
	return $cast($Void, $DocTreeScanner::visitEndElement(node, p));
}

$Void* JavadocFormatter$2::visitDocComment($DocCommentTree* node, $Void* p) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($Void, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $cast($Void, $DocTreeScanner::visitDocComment(node, p)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			closeTable();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void JavadocFormatter$2::closeTable() {
	if (this->currentTable != nullptr) {
		$nc(this->val$result)->put(this->currentTable, $($Integer::valueOf($Math::max(this->currentMaxColumns, this->currentRowColumns))));
		$set(this, currentTable, nullptr);
	}
}

$Object* JavadocFormatter$2::visitStartElement($StartElementTree* node, Object$* p) {
	return $of(this->visitStartElement(node, $cast($Void, p)));
}

$Object* JavadocFormatter$2::visitEndElement($EndElementTree* node, Object$* p) {
	return $of(this->visitEndElement(node, $cast($Void, p)));
}

$Object* JavadocFormatter$2::visitDocComment($DocCommentTree* node, Object$* p) {
	return $of(this->visitDocComment(node, $cast($Void, p)));
}

JavadocFormatter$2::JavadocFormatter$2() {
}

$Class* JavadocFormatter$2::load$($String* name, bool initialize) {
	$loadClass(JavadocFormatter$2, name, initialize, &_JavadocFormatter$2_ClassInfo_, allocate$JavadocFormatter$2);
	return class$;
}

$Class* JavadocFormatter$2::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk