PORTROACH_COMMENT =	0.13a is newer than 0.13
PORTROACH =		skipv:0.13

COMMENT =		fast-paced sidescrolling shoot-em-up

V =			0.13
DISTNAME =		vacuum-${V}a
REVISION =		1

CATEGORIES =		games

HOMEPAGE =		http://apocalypse.rulez.org/vacuum

# GPLv2+, see bin/vacuum.pl
PERMIT_PACKAGE =	Yes

SITES =			${SITE_SOURCEFORGE:=vacuum/}

BUILD_DEPENDS =		devel/p5-SDL
RUN_DEPENDS =		devel/p5-SDL

CONFIGURE_STYLE =	gnu

WRKDIST =		${WRKDIR}/vacuum-$V

.include <bsd.port.mk>
