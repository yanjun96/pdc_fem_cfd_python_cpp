function F = flux_function(U)
global GAMMA R P0 RHO0 P1 RHO1 Kentr;
% This function should be completed by computing the flux:
%        rho*u
% F(U) = 
%        rho*u^2 + p

% F(U) should be stored in the same way as the conservative
% variables
% 
% F(:,1) = rho*u
% F(:,2) = rho*u^2 + p
% 
%%%%% Here you have to define the flux function!!!!

  
  p    = Kentr*U(:,1).^GAMMA;

 F(:,1) = U(:,1).*U(:,2)./U(:,1);
 F(:,2) = U(:,1).*(U(:,2)./U(:,1)).^2 + p;