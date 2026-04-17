//--------------------------------------------------------------------------
// Copyright(c) 2024, Yoshiya Usui
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met :
//
// 1. Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and /or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//--------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include "Control.h"

int main( int argc, char* argv[] ){

	bool outputToConsole(false);
	for (int i = 1; i < argc; ++i) {
		if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
			printf("TRACMT usage:\n");
			printf("  TRACMT [options]\n\n");
			printf("How to run:\n");
			printf("  1) Run TRACMT in the directory containing your input files.\n");
			printf("  2) Ensure a control file named param.dat exists in that directory.\n");
			printf("  3) Ensure param.dat lists the time-series files to process.\n\n");
			printf("Required input files:\n");
			printf("  - param.dat\n");
			printf("  - Time-series data files referenced by param.dat\n\n");
			printf("Typical output files:\n");
			printf("  - TRACMT.log\n");
			printf("  - TRACMT.cvg\n");
			printf("  - response_functions.csv\n");
			printf("  - apparent_resistivity_and_phase.csv (if OUTPUT_RHOA_PHS is set)\n\n");
			printf("Useful param.dat keywords:\n");
			printf("  NUM_OUT, SAMPLING_FREQ, NUM_THREADS, AZIMUTH, ROTATION\n");
			printf("  PROCEDURE, RRMS, MESTIMATORS, ERROR_ESTIMATION\n");
			printf("  NUM_SECTION, SEGMENT, DATA_FILES, END\n\n");
			printf("Options:\n");
			printf("  -cout             Output log information to console\n");
			printf("  -h, --help        Show this help message and exit\n");
			return 0;
		}
		if (strcmp(argv[i], "-cout") == 0) {
			outputToConsole = true;
		}
	}

	Control::getInstance()->run(outputToConsole);

	return 0;

}


