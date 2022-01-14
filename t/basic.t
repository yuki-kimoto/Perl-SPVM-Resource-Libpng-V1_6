use strict;
use warnings;
use FindBin;
use lib "$FindBin::Bin/lib";

use DynaLoader;

use Test::More 'no_plan';

use SPVM 'Resource::Libpng';


is(SPVM::Resource::Libpng->dummy, 1);
