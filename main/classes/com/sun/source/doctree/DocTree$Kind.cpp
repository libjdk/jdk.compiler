#include <com/sun/source/doctree/DocTree$Kind.h>

#include <com/sun/source/doctree/DocTree.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef AUTHOR
#undef CODE
#undef COMMENT
#undef DEPRECATED
#undef DOC_COMMENT
#undef DOC_ROOT
#undef DOC_TYPE
#undef END_ELEMENT
#undef ENTITY
#undef ERRONEOUS
#undef EXCEPTION
#undef HIDDEN
#undef IDENTIFIER
#undef INDEX
#undef INHERIT_DOC
#undef LINK
#undef LINK_PLAIN
#undef LITERAL
#undef OTHER
#undef PARAM
#undef PROVIDES
#undef REFERENCE
#undef RETURN
#undef SEE
#undef SERIAL
#undef SERIAL_DATA
#undef SERIAL_FIELD
#undef SINCE
#undef START_ELEMENT
#undef SUMMARY
#undef SYSTEM_PROPERTY
#undef TEXT
#undef THROWS
#undef UNKNOWN_BLOCK_TAG
#undef UNKNOWN_INLINE_TAG
#undef USES
#undef VALUE
#undef VERSION

using $DocTree$KindArray = $Array<::com::sun::source::doctree::DocTree$Kind>;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {

$FieldInfo _DocTree$Kind_FieldInfo_[] = {
	{"ATTRIBUTE", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, ATTRIBUTE)},
	{"AUTHOR", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, AUTHOR)},
	{"CODE", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, CODE)},
	{"COMMENT", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, COMMENT)},
	{"DEPRECATED", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, DEPRECATED)},
	{"DOC_COMMENT", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, DOC_COMMENT)},
	{"DOC_ROOT", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, DOC_ROOT)},
	{"DOC_TYPE", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, DOC_TYPE)},
	{"END_ELEMENT", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, END_ELEMENT)},
	{"ENTITY", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, ENTITY)},
	{"ERRONEOUS", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, ERRONEOUS)},
	{"EXCEPTION", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, EXCEPTION)},
	{"HIDDEN", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, HIDDEN)},
	{"IDENTIFIER", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, IDENTIFIER)},
	{"INDEX", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, INDEX)},
	{"INHERIT_DOC", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, INHERIT_DOC)},
	{"LINK", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, LINK)},
	{"LINK_PLAIN", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, LINK_PLAIN)},
	{"LITERAL", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, LITERAL)},
	{"PARAM", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, PARAM)},
	{"PROVIDES", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, PROVIDES)},
	{"REFERENCE", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, REFERENCE)},
	{"RETURN", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, RETURN)},
	{"SEE", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, SEE)},
	{"SERIAL", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, SERIAL)},
	{"SERIAL_DATA", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, SERIAL_DATA)},
	{"SERIAL_FIELD", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, SERIAL_FIELD)},
	{"SINCE", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, SINCE)},
	{"START_ELEMENT", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, START_ELEMENT)},
	{"SYSTEM_PROPERTY", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, SYSTEM_PROPERTY)},
	{"SUMMARY", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, SUMMARY)},
	{"TEXT", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, TEXT)},
	{"THROWS", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, THROWS)},
	{"UNKNOWN_BLOCK_TAG", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, UNKNOWN_BLOCK_TAG)},
	{"UNKNOWN_INLINE_TAG", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, UNKNOWN_INLINE_TAG)},
	{"USES", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, USES)},
	{"VALUE", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, VALUE)},
	{"VERSION", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, VERSION)},
	{"OTHER", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DocTree$Kind, OTHER)},
	{"$VALUES", "[Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DocTree$Kind, $VALUES)},
	{"tagName", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DocTree$Kind, tagName)},
	{}
};

$MethodInfo _DocTree$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$DocTree$KindArray*(*)()>(&DocTree$Kind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(DocTree$Kind::*)($String*,int32_t)>(&DocTree$Kind::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(DocTree$Kind::*)($String*,int32_t,$String*)>(&DocTree$Kind::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DocTree$Kind*(*)($String*)>(&DocTree$Kind::valueOf))},
	{"values", "()[Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DocTree$KindArray*(*)()>(&DocTree$Kind::values))},
	{}
};

$InnerClassInfo _DocTree$Kind_InnerClassesInfo_[] = {
	{"com.sun.source.doctree.DocTree$Kind", "com.sun.source.doctree.DocTree", "Kind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DocTree$Kind_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.source.doctree.DocTree$Kind",
	"java.lang.Enum",
	nullptr,
	_DocTree$Kind_FieldInfo_,
	_DocTree$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/source/doctree/DocTree$Kind;>;",
	nullptr,
	_DocTree$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.source.doctree.DocTree"
};

$Object* allocate$DocTree$Kind($Class* clazz) {
	return $of($alloc(DocTree$Kind));
}

DocTree$Kind* DocTree$Kind::ATTRIBUTE = nullptr;
DocTree$Kind* DocTree$Kind::AUTHOR = nullptr;
DocTree$Kind* DocTree$Kind::CODE = nullptr;
DocTree$Kind* DocTree$Kind::COMMENT = nullptr;
DocTree$Kind* DocTree$Kind::DEPRECATED = nullptr;
DocTree$Kind* DocTree$Kind::DOC_COMMENT = nullptr;
DocTree$Kind* DocTree$Kind::DOC_ROOT = nullptr;
DocTree$Kind* DocTree$Kind::DOC_TYPE = nullptr;
DocTree$Kind* DocTree$Kind::END_ELEMENT = nullptr;
DocTree$Kind* DocTree$Kind::ENTITY = nullptr;
DocTree$Kind* DocTree$Kind::ERRONEOUS = nullptr;
DocTree$Kind* DocTree$Kind::EXCEPTION = nullptr;
DocTree$Kind* DocTree$Kind::HIDDEN = nullptr;
DocTree$Kind* DocTree$Kind::IDENTIFIER = nullptr;
DocTree$Kind* DocTree$Kind::INDEX = nullptr;
DocTree$Kind* DocTree$Kind::INHERIT_DOC = nullptr;
DocTree$Kind* DocTree$Kind::LINK = nullptr;
DocTree$Kind* DocTree$Kind::LINK_PLAIN = nullptr;
DocTree$Kind* DocTree$Kind::LITERAL = nullptr;
DocTree$Kind* DocTree$Kind::PARAM = nullptr;
DocTree$Kind* DocTree$Kind::PROVIDES = nullptr;
DocTree$Kind* DocTree$Kind::REFERENCE = nullptr;
DocTree$Kind* DocTree$Kind::RETURN = nullptr;
DocTree$Kind* DocTree$Kind::SEE = nullptr;
DocTree$Kind* DocTree$Kind::SERIAL = nullptr;
DocTree$Kind* DocTree$Kind::SERIAL_DATA = nullptr;
DocTree$Kind* DocTree$Kind::SERIAL_FIELD = nullptr;
DocTree$Kind* DocTree$Kind::SINCE = nullptr;
DocTree$Kind* DocTree$Kind::START_ELEMENT = nullptr;
DocTree$Kind* DocTree$Kind::SYSTEM_PROPERTY = nullptr;
DocTree$Kind* DocTree$Kind::SUMMARY = nullptr;
DocTree$Kind* DocTree$Kind::TEXT = nullptr;
DocTree$Kind* DocTree$Kind::THROWS = nullptr;
DocTree$Kind* DocTree$Kind::UNKNOWN_BLOCK_TAG = nullptr;
DocTree$Kind* DocTree$Kind::UNKNOWN_INLINE_TAG = nullptr;
DocTree$Kind* DocTree$Kind::USES = nullptr;
DocTree$Kind* DocTree$Kind::VALUE = nullptr;
DocTree$Kind* DocTree$Kind::VERSION = nullptr;
DocTree$Kind* DocTree$Kind::OTHER = nullptr;
$DocTree$KindArray* DocTree$Kind::$VALUES = nullptr;

$DocTree$KindArray* DocTree$Kind::$values() {
	$init(DocTree$Kind);
	return $new($DocTree$KindArray, {
		DocTree$Kind::ATTRIBUTE,
		DocTree$Kind::AUTHOR,
		DocTree$Kind::CODE,
		DocTree$Kind::COMMENT,
		DocTree$Kind::DEPRECATED,
		DocTree$Kind::DOC_COMMENT,
		DocTree$Kind::DOC_ROOT,
		DocTree$Kind::DOC_TYPE,
		DocTree$Kind::END_ELEMENT,
		DocTree$Kind::ENTITY,
		DocTree$Kind::ERRONEOUS,
		DocTree$Kind::EXCEPTION,
		DocTree$Kind::HIDDEN,
		DocTree$Kind::IDENTIFIER,
		DocTree$Kind::INDEX,
		DocTree$Kind::INHERIT_DOC,
		DocTree$Kind::LINK,
		DocTree$Kind::LINK_PLAIN,
		DocTree$Kind::LITERAL,
		DocTree$Kind::PARAM,
		DocTree$Kind::PROVIDES,
		DocTree$Kind::REFERENCE,
		DocTree$Kind::RETURN,
		DocTree$Kind::SEE,
		DocTree$Kind::SERIAL,
		DocTree$Kind::SERIAL_DATA,
		DocTree$Kind::SERIAL_FIELD,
		DocTree$Kind::SINCE,
		DocTree$Kind::START_ELEMENT,
		DocTree$Kind::SYSTEM_PROPERTY,
		DocTree$Kind::SUMMARY,
		DocTree$Kind::TEXT,
		DocTree$Kind::THROWS,
		DocTree$Kind::UNKNOWN_BLOCK_TAG,
		DocTree$Kind::UNKNOWN_INLINE_TAG,
		DocTree$Kind::USES,
		DocTree$Kind::VALUE,
		DocTree$Kind::VERSION,
		DocTree$Kind::OTHER
	});
}

$DocTree$KindArray* DocTree$Kind::values() {
	$init(DocTree$Kind);
	return $cast($DocTree$KindArray, DocTree$Kind::$VALUES->clone());
}

DocTree$Kind* DocTree$Kind::valueOf($String* name) {
	$init(DocTree$Kind);
	return $cast(DocTree$Kind, $Enum::valueOf(DocTree$Kind::class$, name));
}

void DocTree$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, tagName, nullptr);
}

void DocTree$Kind::init$($String* $enum$name, int32_t $enum$ordinal, $String* tagName) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, tagName, tagName);
}

void clinit$DocTree$Kind($Class* class$) {
	$assignStatic(DocTree$Kind::ATTRIBUTE, $new(DocTree$Kind, "ATTRIBUTE"_s, 0));
	$assignStatic(DocTree$Kind::AUTHOR, $new(DocTree$Kind, "AUTHOR"_s, 1, "author"_s));
	$assignStatic(DocTree$Kind::CODE, $new(DocTree$Kind, "CODE"_s, 2, "code"_s));
	$assignStatic(DocTree$Kind::COMMENT, $new(DocTree$Kind, "COMMENT"_s, 3));
	$assignStatic(DocTree$Kind::DEPRECATED, $new(DocTree$Kind, "DEPRECATED"_s, 4, "deprecated"_s));
	$assignStatic(DocTree$Kind::DOC_COMMENT, $new(DocTree$Kind, "DOC_COMMENT"_s, 5));
	$assignStatic(DocTree$Kind::DOC_ROOT, $new(DocTree$Kind, "DOC_ROOT"_s, 6, "docRoot"_s));
	$assignStatic(DocTree$Kind::DOC_TYPE, $new(DocTree$Kind, "DOC_TYPE"_s, 7));
	$assignStatic(DocTree$Kind::END_ELEMENT, $new(DocTree$Kind, "END_ELEMENT"_s, 8));
	$assignStatic(DocTree$Kind::ENTITY, $new(DocTree$Kind, "ENTITY"_s, 9));
	$assignStatic(DocTree$Kind::ERRONEOUS, $new(DocTree$Kind, "ERRONEOUS"_s, 10));
	$assignStatic(DocTree$Kind::EXCEPTION, $new(DocTree$Kind, "EXCEPTION"_s, 11, "exception"_s));
	$assignStatic(DocTree$Kind::HIDDEN, $new(DocTree$Kind, "HIDDEN"_s, 12, "hidden"_s));
	$assignStatic(DocTree$Kind::IDENTIFIER, $new(DocTree$Kind, "IDENTIFIER"_s, 13));
	$assignStatic(DocTree$Kind::INDEX, $new(DocTree$Kind, "INDEX"_s, 14, "index"_s));
	$assignStatic(DocTree$Kind::INHERIT_DOC, $new(DocTree$Kind, "INHERIT_DOC"_s, 15, "inheritDoc"_s));
	$assignStatic(DocTree$Kind::LINK, $new(DocTree$Kind, "LINK"_s, 16, "link"_s));
	$assignStatic(DocTree$Kind::LINK_PLAIN, $new(DocTree$Kind, "LINK_PLAIN"_s, 17, "linkplain"_s));
	$assignStatic(DocTree$Kind::LITERAL, $new(DocTree$Kind, "LITERAL"_s, 18, "literal"_s));
	$assignStatic(DocTree$Kind::PARAM, $new(DocTree$Kind, "PARAM"_s, 19, "param"_s));
	$assignStatic(DocTree$Kind::PROVIDES, $new(DocTree$Kind, "PROVIDES"_s, 20, "provides"_s));
	$assignStatic(DocTree$Kind::REFERENCE, $new(DocTree$Kind, "REFERENCE"_s, 21));
	$assignStatic(DocTree$Kind::RETURN, $new(DocTree$Kind, "RETURN"_s, 22, "return"_s));
	$assignStatic(DocTree$Kind::SEE, $new(DocTree$Kind, "SEE"_s, 23, "see"_s));
	$assignStatic(DocTree$Kind::SERIAL, $new(DocTree$Kind, "SERIAL"_s, 24, "serial"_s));
	$assignStatic(DocTree$Kind::SERIAL_DATA, $new(DocTree$Kind, "SERIAL_DATA"_s, 25, "serialData"_s));
	$assignStatic(DocTree$Kind::SERIAL_FIELD, $new(DocTree$Kind, "SERIAL_FIELD"_s, 26, "serialField"_s));
	$assignStatic(DocTree$Kind::SINCE, $new(DocTree$Kind, "SINCE"_s, 27, "since"_s));
	$assignStatic(DocTree$Kind::START_ELEMENT, $new(DocTree$Kind, "START_ELEMENT"_s, 28));
	$assignStatic(DocTree$Kind::SYSTEM_PROPERTY, $new(DocTree$Kind, "SYSTEM_PROPERTY"_s, 29, "systemProperty"_s));
	$assignStatic(DocTree$Kind::SUMMARY, $new(DocTree$Kind, "SUMMARY"_s, 30, "summary"_s));
	$assignStatic(DocTree$Kind::TEXT, $new(DocTree$Kind, "TEXT"_s, 31));
	$assignStatic(DocTree$Kind::THROWS, $new(DocTree$Kind, "THROWS"_s, 32, "throws"_s));
	$assignStatic(DocTree$Kind::UNKNOWN_BLOCK_TAG, $new(DocTree$Kind, "UNKNOWN_BLOCK_TAG"_s, 33));
	$assignStatic(DocTree$Kind::UNKNOWN_INLINE_TAG, $new(DocTree$Kind, "UNKNOWN_INLINE_TAG"_s, 34));
	$assignStatic(DocTree$Kind::USES, $new(DocTree$Kind, "USES"_s, 35, "uses"_s));
	$assignStatic(DocTree$Kind::VALUE, $new(DocTree$Kind, "VALUE"_s, 36, "value"_s));
	$assignStatic(DocTree$Kind::VERSION, $new(DocTree$Kind, "VERSION"_s, 37, "version"_s));
	$assignStatic(DocTree$Kind::OTHER, $new(DocTree$Kind, "OTHER"_s, 38));
	$assignStatic(DocTree$Kind::$VALUES, DocTree$Kind::$values());
}

DocTree$Kind::DocTree$Kind() {
}

$Class* DocTree$Kind::load$($String* name, bool initialize) {
	$loadClass(DocTree$Kind, name, initialize, &_DocTree$Kind_ClassInfo_, clinit$DocTree$Kind, allocate$DocTree$Kind);
	return class$;
}

$Class* DocTree$Kind::class$ = nullptr;

			} // doctree
		} // source
	} // sun
} // com