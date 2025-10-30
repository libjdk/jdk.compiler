#include <jdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag.h>

#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/lang/Enum.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/lang/model/element/Name.h>
#include <jdk/internal/shellsupport/doc/JavadocFormatter.h>
#include <jcpp.h>

#undef BLOCKQUOTE
#undef DD
#undef DL
#undef DT
#undef HTML
#undef IMG
#undef LI
#undef OL
#undef P
#undef PRE
#undef TABLE
#undef TD
#undef TH
#undef TR
#undef UL

using $JavadocFormatter$HtmlTagArray = $Array<::jdk::internal::shellsupport::doc::JavadocFormatter$HtmlTag>;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Name = ::javax::lang::model::element::Name;
using $JavadocFormatter = ::jdk::internal::shellsupport::doc::JavadocFormatter;

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {

$FieldInfo _JavadocFormatter$HtmlTag_FieldInfo_[] = {
	{"HTML", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, HTML)},
	{"H1", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, H1)},
	{"H2", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, H2)},
	{"H3", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, H3)},
	{"H4", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, H4)},
	{"H5", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, H5)},
	{"H6", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, H6)},
	{"BLOCKQUOTE", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, BLOCKQUOTE)},
	{"P", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, P)},
	{"PRE", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, PRE)},
	{"IMG", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, IMG)},
	{"OL", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, OL)},
	{"UL", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, UL)},
	{"LI", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, LI)},
	{"DL", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, DL)},
	{"DT", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, DT)},
	{"DD", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, DD)},
	{"TABLE", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, TABLE)},
	{"TR", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, TR)},
	{"TD", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, TD)},
	{"TH", "Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JavadocFormatter$HtmlTag, TH)},
	{"$VALUES", "[Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JavadocFormatter$HtmlTag, $VALUES)},
	{"index", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavadocFormatter$HtmlTag, index)},
	{}
};

$MethodInfo _JavadocFormatter$HtmlTag_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JavadocFormatter$HtmlTagArray*(*)()>(&JavadocFormatter$HtmlTag::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JavadocFormatter$HtmlTag::*)($String*,int32_t)>(&JavadocFormatter$HtmlTag::init$))},
	{"get", "(Ljavax/lang/model/element/Name;)Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavadocFormatter$HtmlTag*(*)($Name*)>(&JavadocFormatter$HtmlTag::get))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JavadocFormatter$HtmlTag*(*)($String*)>(&JavadocFormatter$HtmlTag::valueOf))},
	{"values", "()[Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavadocFormatter$HtmlTagArray*(*)()>(&JavadocFormatter$HtmlTag::values))},
	{}
};

$InnerClassInfo _JavadocFormatter$HtmlTag_InnerClassesInfo_[] = {
	{"jdk.internal.shellsupport.doc.JavadocFormatter$HtmlTag", "jdk.internal.shellsupport.doc.JavadocFormatter", "HtmlTag", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JavadocFormatter$HtmlTag_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.shellsupport.doc.JavadocFormatter$HtmlTag",
	"java.lang.Enum",
	nullptr,
	_JavadocFormatter$HtmlTag_FieldInfo_,
	_JavadocFormatter$HtmlTag_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/shellsupport/doc/JavadocFormatter$HtmlTag;>;",
	nullptr,
	_JavadocFormatter$HtmlTag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.shellsupport.doc.JavadocFormatter"
};

$Object* allocate$JavadocFormatter$HtmlTag($Class* clazz) {
	return $of($alloc(JavadocFormatter$HtmlTag));
}

JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::HTML = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::H1 = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::H2 = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::H3 = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::H4 = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::H5 = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::H6 = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::BLOCKQUOTE = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::P = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::PRE = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::IMG = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::OL = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::UL = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::LI = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::DL = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::DT = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::DD = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::TABLE = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::TR = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::TD = nullptr;
JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::TH = nullptr;
$JavadocFormatter$HtmlTagArray* JavadocFormatter$HtmlTag::$VALUES = nullptr;
$Map* JavadocFormatter$HtmlTag::index = nullptr;

$JavadocFormatter$HtmlTagArray* JavadocFormatter$HtmlTag::$values() {
	$init(JavadocFormatter$HtmlTag);
	return $new($JavadocFormatter$HtmlTagArray, {
		JavadocFormatter$HtmlTag::HTML,
		JavadocFormatter$HtmlTag::H1,
		JavadocFormatter$HtmlTag::H2,
		JavadocFormatter$HtmlTag::H3,
		JavadocFormatter$HtmlTag::H4,
		JavadocFormatter$HtmlTag::H5,
		JavadocFormatter$HtmlTag::H6,
		JavadocFormatter$HtmlTag::BLOCKQUOTE,
		JavadocFormatter$HtmlTag::P,
		JavadocFormatter$HtmlTag::PRE,
		JavadocFormatter$HtmlTag::IMG,
		JavadocFormatter$HtmlTag::OL,
		JavadocFormatter$HtmlTag::UL,
		JavadocFormatter$HtmlTag::LI,
		JavadocFormatter$HtmlTag::DL,
		JavadocFormatter$HtmlTag::DT,
		JavadocFormatter$HtmlTag::DD,
		JavadocFormatter$HtmlTag::TABLE,
		JavadocFormatter$HtmlTag::TR,
		JavadocFormatter$HtmlTag::TD,
		JavadocFormatter$HtmlTag::TH
	});
}

$JavadocFormatter$HtmlTagArray* JavadocFormatter$HtmlTag::values() {
	$init(JavadocFormatter$HtmlTag);
	return $cast($JavadocFormatter$HtmlTagArray, JavadocFormatter$HtmlTag::$VALUES->clone());
}

JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::valueOf($String* name) {
	$init(JavadocFormatter$HtmlTag);
	return $cast(JavadocFormatter$HtmlTag, $Enum::valueOf(JavadocFormatter$HtmlTag::class$, name));
}

void JavadocFormatter$HtmlTag::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

JavadocFormatter$HtmlTag* JavadocFormatter$HtmlTag::get($Name* tagName) {
	$init(JavadocFormatter$HtmlTag);
	$useLocalCurrentObjectStackCache();
	return $cast(JavadocFormatter$HtmlTag, $nc(JavadocFormatter$HtmlTag::index)->get($($StringUtils::toLowerCase($($nc($of(tagName))->toString())))));
}

void clinit$JavadocFormatter$HtmlTag($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JavadocFormatter$HtmlTag::HTML, $new(JavadocFormatter$HtmlTag, "HTML"_s, 0));
	$assignStatic(JavadocFormatter$HtmlTag::H1, $new(JavadocFormatter$HtmlTag, "H1"_s, 1));
	$assignStatic(JavadocFormatter$HtmlTag::H2, $new(JavadocFormatter$HtmlTag, "H2"_s, 2));
	$assignStatic(JavadocFormatter$HtmlTag::H3, $new(JavadocFormatter$HtmlTag, "H3"_s, 3));
	$assignStatic(JavadocFormatter$HtmlTag::H4, $new(JavadocFormatter$HtmlTag, "H4"_s, 4));
	$assignStatic(JavadocFormatter$HtmlTag::H5, $new(JavadocFormatter$HtmlTag, "H5"_s, 5));
	$assignStatic(JavadocFormatter$HtmlTag::H6, $new(JavadocFormatter$HtmlTag, "H6"_s, 6));
	$assignStatic(JavadocFormatter$HtmlTag::BLOCKQUOTE, $new(JavadocFormatter$HtmlTag, "BLOCKQUOTE"_s, 7));
	$assignStatic(JavadocFormatter$HtmlTag::P, $new(JavadocFormatter$HtmlTag, "P"_s, 8));
	$assignStatic(JavadocFormatter$HtmlTag::PRE, $new(JavadocFormatter$HtmlTag, "PRE"_s, 9));
	$assignStatic(JavadocFormatter$HtmlTag::IMG, $new(JavadocFormatter$HtmlTag, "IMG"_s, 10));
	$assignStatic(JavadocFormatter$HtmlTag::OL, $new(JavadocFormatter$HtmlTag, "OL"_s, 11));
	$assignStatic(JavadocFormatter$HtmlTag::UL, $new(JavadocFormatter$HtmlTag, "UL"_s, 12));
	$assignStatic(JavadocFormatter$HtmlTag::LI, $new(JavadocFormatter$HtmlTag, "LI"_s, 13));
	$assignStatic(JavadocFormatter$HtmlTag::DL, $new(JavadocFormatter$HtmlTag, "DL"_s, 14));
	$assignStatic(JavadocFormatter$HtmlTag::DT, $new(JavadocFormatter$HtmlTag, "DT"_s, 15));
	$assignStatic(JavadocFormatter$HtmlTag::DD, $new(JavadocFormatter$HtmlTag, "DD"_s, 16));
	$assignStatic(JavadocFormatter$HtmlTag::TABLE, $new(JavadocFormatter$HtmlTag, "TABLE"_s, 17));
	$assignStatic(JavadocFormatter$HtmlTag::TR, $new(JavadocFormatter$HtmlTag, "TR"_s, 18));
	$assignStatic(JavadocFormatter$HtmlTag::TD, $new(JavadocFormatter$HtmlTag, "TD"_s, 19));
	$assignStatic(JavadocFormatter$HtmlTag::TH, $new(JavadocFormatter$HtmlTag, "TH"_s, 20));
	$assignStatic(JavadocFormatter$HtmlTag::$VALUES, JavadocFormatter$HtmlTag::$values());
	$assignStatic(JavadocFormatter$HtmlTag::index, $new($HashMap));
	{
		{
			$var($JavadocFormatter$HtmlTagArray, arr$, JavadocFormatter$HtmlTag::values());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				JavadocFormatter$HtmlTag* t = arr$->get(i$);
				{
					$nc(JavadocFormatter$HtmlTag::index)->put($($StringUtils::toLowerCase($($nc(t)->name()))), t);
				}
			}
		}
	}
}

JavadocFormatter$HtmlTag::JavadocFormatter$HtmlTag() {
}

$Class* JavadocFormatter$HtmlTag::load$($String* name, bool initialize) {
	$loadClass(JavadocFormatter$HtmlTag, name, initialize, &_JavadocFormatter$HtmlTag_ClassInfo_, clinit$JavadocFormatter$HtmlTag, allocate$JavadocFormatter$HtmlTag);
	return class$;
}

$Class* JavadocFormatter$HtmlTag::class$ = nullptr;

			} // doc
		} // shellsupport
	} // internal
} // jdk