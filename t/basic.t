use strict;
use warnings;
use FindBin;
use lib "$FindBin::Bin/lib";

use DynaLoader;

use Test::More 'no_plan';

use SPVM 'Resource::Libpng::V1_6';


is(SPVM::Resource::Libpng::V1_6->dummy, 1);
