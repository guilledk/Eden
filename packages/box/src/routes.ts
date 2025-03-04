import { Router } from "express";
import { subchainConfig } from "./config";

import {
    infoHandler,
    ipfsUploadConfigHandler,
    ipfsUploadHandler,
    subchainHandler,
} from "./handlers";

const router: Router = Router();

router.get("/", infoHandler);
router.post("/v1/ipfs-upload", ipfsUploadConfigHandler, ipfsUploadHandler);
if (subchainConfig.enable) router.use("/v1/subchain", subchainHandler);

export default router;
