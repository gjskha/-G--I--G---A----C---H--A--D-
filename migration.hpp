Migrations
----------
  private:
  MigrationsArray <Migration>
  string directory
  string vendor 

  public:
  Migrations::Migrations(vendor,directory,optionalMigrationArg,direction)
  Migrations:getDirectory
  Migrations::config
  Migrations::setVendor
  Migrations::getVendor
  Migrations::execute

Migration
---------
  private:
  status: success, fail, null
  
  public:
  Migration::up
  Migration::down
