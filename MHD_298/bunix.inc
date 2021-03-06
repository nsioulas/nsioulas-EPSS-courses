*        parameter (nx=2048,nrl=nx+2,ny=nx,nf32=2*nx+2,nspec=14)
        common/ifax/ifax(20)
*        common/wf/wf(8*nrl) 
        common/wf/wf(16400) 
*        common/trigs/trigs(nf32) 
        common/trigs/trigs(4098) 
        common/ifaxc/ifaxc(20) 
*        common/ex/ex(nf32)  
        common/ex/ex(4098)  
*        common/exc/exc(nf32)
        common/exc/exc(4098)
*        common/fs1/fs1(nrl)
        common/fs1/fs1(2050)
*        common/kx/rkx(nx/2+1)
        common/kx/rkx(1025)
*        common/ckx2/crkx2(nx+2)
        common/ckx2/crkx2(2050)
*        common/kx2/rkx2(nx/2+1)
        common/kx2/rkx2(1025)
        common/KX0/rkx0,rky0,u0,bmod,alfa,bx00,bx0,by0,bz0,te0,rm0
        common/option/ifns2D,iquoi,ifvardt,ifsave,ifnew,ifbur,ifcray
        common/param/rofond,rtrunc,gamma,alf,sro,fnu,snu,seta,sk,amu(8)
        common/temp/dtold,temp,dt,nend,nprint,iskip,ltim,leul,ilout
        common/sortie/tdump,dtdump,tmax,facdt,facnu,tlect,jreli
        common/expans/rayon,uu0,area,rainv,rainv2,ifiso
        common/exp2/cosa,sina,sinar,ck2,sinard,ck2d
        common/GRAF/fond,Y1MIN,Y1MAX,Y2MIN,Y2MAX,jplot,ntermg
        common/NCAR/titre,ifncar,ifcntr,ifvect,ifpers,iz
*	common/friction1/fric(nrl)
*        common/force1/for(nrl)
	common/friction1/fric(2050)
        common/force1/for(2050)
        common/friction2/friction,force
        common/index/index
        common/soliton/rlng,hall
