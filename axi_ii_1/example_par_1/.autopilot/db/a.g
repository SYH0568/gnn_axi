#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/ShiYuHuang/manual_GNN_conversion/hls_output_current/add/source_to_target/axi/axi_ii_1/example_par_1/.autopilot/db/a.g.bc ${1+"$@"}
