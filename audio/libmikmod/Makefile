COMMENT =	mikmod sound library

DISTNAME =	libmikmod-3.3.11.1
SHARED_LIBS +=	mikmod               4.0      # .3.0
CATEGORIES =	audio devel
REVISION =	1

HOMEPAGE =	https://mikmod.sourceforge.net/

# LGPLv2.1+
PERMIT_PACKAGE =	Yes

WANTLIB +=	m pthread sndio

SITES =		${SITE_SOURCEFORGE:=mikmod/}

SEPARATE_BUILD = Yes
CONFIGURE_STYLE = gnu

CONFIGURE_ARGS+= --disable-dl \
		 --disable-oss \
		 --disable-esd

.include <bsd.port.mk>
