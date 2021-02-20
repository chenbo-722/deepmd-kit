#pragma once

template<typename FPTYPE>
void prod_force_a_cpu(
    FPTYPE * force, 
    const FPTYPE * net_deriv, 
    const FPTYPE * in_deriv, 
    const int * nlist, 
    const int nloc, 
    const int nall, 
    const int nnei);

template<typename FPTYPE>
void prod_force_r_cpu(
    FPTYPE * force, 
    const FPTYPE * net_deriv, 
    const FPTYPE * in_deriv, 
    const int * nlist, 
    const int nloc, 
    const int nall, 
    const int nnei);

