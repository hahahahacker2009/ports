COMMENT=	ruby FastCGI library

DISTNAME=	fcgi-0.9.2.2
CATEGORIES=	www

# ruby license
PERMIT_PACKAGE=	Yes

MODULES=	lang/ruby

WANTLIB=	fcgi

LIB_DEPENDS=	www/fcgi>=2.4.0

CONFIGURE_STYLE=ruby gem ext
CONFIGURE_ARGS=	--with-fcgi-include=${LOCALBASE}/include \
		--with-fcgi-lib=${LOCALBASE}/lib

.include <bsd.port.mk>
